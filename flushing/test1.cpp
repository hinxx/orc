#include <stdio.h>
#include <time.h>

#include <orc/ColumnPrinter.hh>
#include <orc/OrcFile.hh>


std::unique_ptr<orc::Writer> myCreateWriter(
                                      uint64_t stripeSize,
                                      uint64_t compresionblockSize,
                                      orc::CompressionKind compression,
                                      const orc::Type& type,
                                      orc::MemoryPool* memoryPool,
                                      orc::OutputStream* stream,
                                      orc::FileVersion version,
                                      uint64_t stride = 0,
                                      const std::string& timezone = "GMT") {
    orc::WriterOptions options;
    options.setStripeSize(stripeSize);
    options.setCompressionBlockSize(compresionblockSize);
    options.setCompression(compression);
    options.setMemoryPool(memoryPool);
    options.setRowIndexStride(stride);
    options.setFileVersion(version);
    options.setTimezoneName(timezone);
    return createWriter(type, stream, options);
}


std::unique_ptr<orc::Reader> myCreateReader(
                                      orc::MemoryPool * memoryPool,
                                      std::unique_ptr<orc::InputStream> stream) {
    orc::ReaderOptions options;
    options.setMemoryPool(*memoryPool);
    return createReader(std::move(stream), options);
}

std::unique_ptr<orc::RowReader> myCreateRowReader(
                                            orc::Reader* reader,
                                            const std::string& timezone = "GMT") {
    orc::RowReaderOptions rowReaderOpts;
    rowReaderOpts.setTimezoneName(timezone);
    return reader->createRowReader(rowReaderOpts);
}



void test_empty() {
    std::unique_ptr<orc::OutputStream> outFile = orc::writeLocalFile("c++-empty.orc");
    orc::MemoryPool *pool = orc::getDefaultPool();
    ORC_UNIQUE_PTR<orc::Type> type(orc::Type::buildTypeFromString("struct<col1:int>"));

    uint64_t stripeSize = 16 * 1024; // 16K
    uint64_t compressionBlockSize = 1024; // 1k

    std::unique_ptr<orc::Writer> writer = myCreateWriter(
                                      stripeSize,
                                      compressionBlockSize,
                                      orc::CompressionKind_NONE,
                                      *type,
                                      pool,
                                      outFile.get(),
                                      orc::FileVersion::v_0_12());

    writer->close();

}

void test_multi_stripe(unsigned rowBatchSize) {
    std::unique_ptr<orc::OutputStream> outFile = orc::writeLocalFile("c++-original.orc");
    orc::MemoryPool *pool = orc::getDefaultPool();
    ORC_UNIQUE_PTR<orc::Type> type(orc::Type::buildTypeFromString("struct<col1:int>"));

    uint64_t stripeSize = 100;
    uint64_t compressionBlockSize = 1024;

    std::unique_ptr<orc::Writer> writer = myCreateWriter(
                                      stripeSize,
                                      compressionBlockSize,
                                      orc::CompressionKind_NONE,
                                      *type,
                                      pool,
                                      outFile.get(),
                                      orc::FileVersion::v_0_12());

    // multiple stripes
    std::unique_ptr<orc::ColumnVectorBatch> batch = writer->createRowBatch(rowBatchSize);
    orc::StructVectorBatch* structBatch = dynamic_cast<orc::StructVectorBatch*>(batch.get());
    orc::LongVectorBatch* longBatch = dynamic_cast<orc::LongVectorBatch*>(structBatch->fields[0]);

    // printf("batch memory usage %ld\n", batch->getMemoryUsage());
    // printf("batch capacity %ld\n", batch->capacity);
    // printf("batch numElements %ld\n", batch->numElements);

    // generate >1 stripes since the batch size is larger than stripe size
    // we set the minimum strip size and not the exact stripe size
    for (uint64_t j = 0; j < 10; ++j) {
        for (uint64_t i = 0; i < rowBatchSize; ++i) {
            longBatch->data[i] = static_cast<int64_t>(i*j);
        }
    }
        structBatch->numElements = rowBatchSize*10;
        longBatch->numElements = rowBatchSize*10;

        // printf("structBatch memory usage %ld\n", structBatch->getMemoryUsage());
        // printf("longBatch memory usage %ld\n", longBatch->getMemoryUsage());
        // printf("batch capacity %ld\n", batch->capacity);
        // printf("batch numElements %ld\n", batch->numElements);
        writer->add(*batch);
    //}

    writer->close();
}

void test_multi_stripe_flushing(unsigned rowBatchSize) {
    std::unique_ptr<orc::OutputStream> outFile = orc::writeLocalFile("c++-flushing.orc");
    orc::MemoryPool *pool = orc::getDefaultPool();
    ORC_UNIQUE_PTR<orc::Type> type(orc::Type::buildTypeFromString("struct<col1:int>"));

    uint64_t stripeSize = 20;
    uint64_t compressionBlockSize = 1024;

    std::unique_ptr<orc::Writer> writer = myCreateWriter(
                                      stripeSize,
                                      compressionBlockSize,
                                      orc::CompressionKind_NONE,
                                      *type,
                                      pool,
                                      outFile.get(),
                                      orc::FileVersion::v_0_12());

    // multiple stripes
    std::unique_ptr<orc::ColumnVectorBatch> batch = writer->createRowBatch(rowBatchSize);
    orc::StructVectorBatch* structBatch = dynamic_cast<orc::StructVectorBatch*>(batch.get());
    orc::LongVectorBatch* longBatch = dynamic_cast<orc::LongVectorBatch*>(structBatch->fields[0]);

    // printf("batch memory usage %ld\n", batch->getMemoryUsage());
    // printf("batch capacity %ld\n", batch->capacity);
    // printf("batch numElements %ld\n", batch->numElements);

    // generate >1 stripes since the batch size is larger than stripe size
    // we set the minimum strip size and not the exact stripe size
    for (uint64_t j = 0; j < 10; ++j) {
        for (uint64_t i = 0; i < rowBatchSize; ++i) {
            longBatch->data[i] = static_cast<int64_t>(i*j);
        }
        structBatch->numElements = rowBatchSize;
        longBatch->numElements = rowBatchSize;

        // printf("structBatch memory usage %ld\n", structBatch->getMemoryUsage());
        // printf("longBatch memory usage %ld\n", longBatch->getMemoryUsage());
        // printf("batch capacity %ld\n", batch->capacity);
        // printf("batch numElements %ld\n", batch->numElements);
        writer->add(*batch);
        writer->writeIntermediateFooter();
    }

    writer->close();
}

int main(int argc, char const *argv[]) {
    test_empty();
    test_multi_stripe(10);
    test_multi_stripe_flushing(10);
    return 0;
}

