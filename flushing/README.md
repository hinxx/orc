
create the files with C++ code:

./test1

-rw-------  1 hinkokocevar hinkokocevar     4821 Mar 29 15:23 c++-flushing.orc
-rw-------  1 hinkokocevar hinkokocevar      720 Mar 29 15:23 c++-original.orc

create the files with Java code:

java -jar ../orc-git/java/examples/target/orc-examples-1.9.0-SNAPSHOT-uber.jar write-flush
java -jar ../orc-git/java/examples/target/orc-examples-1.9.0-SNAPSHOT-uber.jar write-original

-rw-r--r--  1 hinkokocevar hinkokocevar     4097 Mar 29 15:19 java-flush.orc
-rw-r--r--  1 hinkokocevar hinkokocevar      289 Mar 29 15:19 java-original.orc

test the files with C++ tools:


../install-git/bin/orc-metadata java-original.orc
{ "name": "java-original.orc",
  "type": "struct<col1:int>",
  "attributes": {},
  "rows": 100,
  "stripe count": 1,
  "format": "0.12", "writer version": "ORC-14", "software version": "ORC Java 1.9.0-SNAPSHOT",
  "compression": "none",
  "file length": 289,
  "content": 160, "stripe stats": 26, "footer": 83, "postscript": 19,
  "row index stride": 10000,
  "user metadata": {
  },
  "stripes": [
    { "stripe": 0, "rows": 100,
      "offset": 3, "length": 157,
      "index": 30, "data": 95, "footer": 32
    }
  ]
}

../install-git/bin/orc-metadata c++-original.orc
{ "name": "c++-original.orc",
  "type": "struct<col1:int>",
  "attributes": {},
  "rows": 100,
  "stripe count": 1,
  "format": "0.12", "writer version": "ORC-135", "software version": "ORC C++ 1.9.0-SNAPSHOT",
  "compression": "none",
  "file length": 720,
  "content": 569, "stripe stats": 29, "footer": 96, "postscript": 22,
  "user metadata": {
  },
  "stripes": [
    { "stripe": 0, "rows": 100,
      "offset": 3, "length": 569,
      "index": 0, "data": 527, "footer": 42
    }
  ]
}

../install-git/bin/orc-metadata c++-flushing.orc
{ "name": "c++-flushing.orc",
  "type": "struct<col1:int>",
  "attributes": {},
  "rows": 100,
  "stripe count": 10,
  "format": "0.12", "writer version": "ORC-135", "software version": "ORC C++ 1.9.0-SNAPSHOT",
  "compression": "none",
  "file length": 4821,
  "content": 288, "stripe stats": 230, "footer": 413, "postscript": 24,
  "user metadata": {
  },
  "stripes": [
    { "stripe": 0, "rows": 10,
      "offset": 3, "length": 27,
      "index": 0, "data": 2, "footer": 25
    },
    { "stripe": 1, "rows": 10,
      "offset": 30, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 2, "rows": 10,
      "offset": 59, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 3, "rows": 10,
      "offset": 88, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 4, "rows": 10,
      "offset": 117, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 5, "rows": 10,
      "offset": 146, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 6, "rows": 10,
      "offset": 175, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 7, "rows": 10,
      "offset": 204, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 8, "rows": 10,
      "offset": 233, "length": 29,
      "index": 0, "data": 4, "footer": 25
    },
    { "stripe": 9, "rows": 10,
      "offset": 262, "length": 29,
      "index": 0, "data": 4, "footer": 25
    }
  ]
}

../install-git/bin/orc-metadata java-flush.orc
{ "name": "java-flush.orc",
  "type": "struct<col1:int>",
  "attributes": {},
  "rows": 100,
  "stripe count": 10,
  "format": "0.12", "writer version": "ORC-14", "software version": "ORC Java 1.9.0-SNAPSHOT",
  "compression": "none",
  "file length": 4097,
  "content": 3625, "stripe stats": 250, "footer": 200, "postscript": 21,
  "row index stride": 10000,
  "user metadata": {
  },
  "stripes": [
    { "stripe": 0, "rows": 10,
      "offset": 3, "length": 62,
      "index": 28, "data": 2, "footer": 32
    },
    { "stripe": 1, "rows": 10,
      "offset": 189, "length": 64,
      "index": 28, "data": 4, "footer": 32
    },
    { "stripe": 2, "rows": 10,
      "offset": 415, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 3, "rows": 10,
      "offset": 681, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 4, "rows": 10,
      "offset": 985, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 5, "rows": 10,
      "offset": 1328, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 6, "rows": 10,
      "offset": 1710, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 7, "rows": 10,
      "offset": 2130, "length": 65,
      "index": 29, "data": 4, "footer": 32
    },
    { "stripe": 8, "rows": 10,
      "offset": 2588, "length": 66,
      "index": 30, "data": 4, "footer": 32
    },
    { "stripe": 9, "rows": 10,
      "offset": 3087, "length": 66,
      "index": 30, "data": 4, "footer": 32
    }
  ]
}

../install-git/bin/orc-scan java-original.orc
Rows: 100
Batches: 1

../install-git/bin/orc-scan java-flush.orc
Rows: 100
Batches: 10

../install-git/bin/orc-scan c++-original.orc
Rows: 100
Batches: 1

../install-git/bin/orc-scan c++-flushing.orc
Caught exception in c++-flushing.orc: bad StripeFooter from c++-flushing.orc from 34 for 25


test the files with Java tools:


java -jar ../orc-git/java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta java-original.orc
Processing data file java-original.orc [length: 289]
Structure for java-original.orc
File Version: 0.12 with ORC_14 by ORC Java 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from java-original.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 100 hasNull: false
    Column 1: count: 100 hasNull: false bytesOnDisk: 95 min: 0 max: 81 sum: 2025

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false bytesOnDisk: 95 min: 0 max: 81 sum: 2025

Stripes:
  Stripe: offset: 3 data: 95 rows: 100 tail: 32 index: 30
    Stream: column 0 section ROW_INDEX start: 3 length 8
    Stream: column 1 section ROW_INDEX start: 11 length 22
    Stream: column 1 section DATA start: 33 length 95
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2

File length: 289 bytes
Padding length: 0 bytes
Padding ratio: 0%

java -jar ../orc-git/java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta java-flush.orc

Processing data file java-flush.orc [length: 4097]
Structure for java-flush.orc
File Version: 0.12 with ORC_14 by ORC Java 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from java-flush.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 2 min: 0 max: 0 sum: 0
  Stripe 2:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 9 sum: 45
  Stripe 3:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 18 sum: 90
  Stripe 4:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 27 sum: 135
  Stripe 5:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 36 sum: 180
  Stripe 6:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 45 sum: 225
  Stripe 7:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 54 sum: 270
  Stripe 8:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 63 sum: 315
  Stripe 9:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 72 sum: 360
  Stripe 10:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false bytesOnDisk: 4 min: 0 max: 81 sum: 405
fileStats.size() = 2
i = 0, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 1, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false bytesOnDisk: 38 min: 0 max: 81 sum: 2025


Stripes:
  Stripe: offset: 3 data: 2 rows: 10 tail: 32 index: 28
    Stream: column 0 section ROW_INDEX start: 3 length 8
    Stream: column 1 section ROW_INDEX start: 11 length 20
    Stream: column 1 section DATA start: 31 length 2
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 189 data: 4 rows: 10 tail: 32 index: 28
    Stream: column 0 section ROW_INDEX start: 189 length 8
    Stream: column 1 section ROW_INDEX start: 197 length 20
    Stream: column 1 section DATA start: 217 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 415 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 415 length 8
    Stream: column 1 section ROW_INDEX start: 423 length 21
    Stream: column 1 section DATA start: 444 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 681 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 681 length 8
    Stream: column 1 section ROW_INDEX start: 689 length 21
    Stream: column 1 section DATA start: 710 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 985 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 985 length 8
    Stream: column 1 section ROW_INDEX start: 993 length 21
    Stream: column 1 section DATA start: 1014 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 1328 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 1328 length 8
    Stream: column 1 section ROW_INDEX start: 1336 length 21
    Stream: column 1 section DATA start: 1357 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 1710 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 1710 length 8
    Stream: column 1 section ROW_INDEX start: 1718 length 21
    Stream: column 1 section DATA start: 1739 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 2130 data: 4 rows: 10 tail: 32 index: 29
    Stream: column 0 section ROW_INDEX start: 2130 length 8
    Stream: column 1 section ROW_INDEX start: 2138 length 21
    Stream: column 1 section DATA start: 2159 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 2588 data: 4 rows: 10 tail: 32 index: 30
    Stream: column 0 section ROW_INDEX start: 2588 length 8
    Stream: column 1 section ROW_INDEX start: 2596 length 22
    Stream: column 1 section DATA start: 2618 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
  Stripe: offset: 3087 data: 4 rows: 10 tail: 32 index: 30
    Stream: column 0 section ROW_INDEX start: 3087 length 8
    Stream: column 1 section ROW_INDEX start: 3095 length 22
    Stream: column 1 section DATA start: 3117 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2

File length: 4097 bytes
Padding length: 2502 bytes
Padding ratio: 61.07%


java -jar ../orc-git/java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta c++-original.orc
Processing data file c++-original.orc [length: 720]
Structure for c++-original.orc
File Version: 0.12 with ORC_CPP_ORIGINAL by ORC C++ 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from c++-original.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 100 hasNull: false
    Column 1: count: 100 hasNull: false min: 0 max: 7451612880285936483

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false min: 0 max: 7451612880285936483

Stripes:
  Stripe: offset: 3 data: 527 rows: 100 tail: 42 index: 0
    Stream: column 0 section PRESENT start: 3 length 13
    Stream: column 1 section PRESENT start: 16 length 12
    Stream: column 1 section DATA start: 28 length 502
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2

File length: 720 bytes
Padding length: 0 bytes
Padding ratio: 0%

java -jar ../orc-git/java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta c++-flushing.orc

Processing data file c++-flushing.orc [length: 4821]
Structure for c++-flushing.orc
File Version: 0.12 with ORC_CPP_ORIGINAL by ORC C++ 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from c++-flushing.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 0 sum: 0
  Stripe 2:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 9 sum: 45
  Stripe 3:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 18 sum: 90
  Stripe 4:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 27 sum: 135
  Stripe 5:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 36 sum: 180
  Stripe 6:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 45 sum: 225
  Stripe 7:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 54 sum: 270
  Stripe 8:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 63 sum: 315
  Stripe 9:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 72 sum: 360
  Stripe 10:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 81 sum: 405
fileStats.size() = 22
i = 0, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 1, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 2, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
Exception in thread "main" java.lang.IllegalArgumentException: Unknown type id 2 in {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
	at org.apache.orc.impl.ParserUtils.findSubtype(ParserUtils.java:310)
	at org.apache.orc.TypeDescription.findSubtype(TypeDescription.java:801)
	at org.apache.orc.impl.ReaderImpl.deserializeStats(ReaderImpl.java:425)
	at org.apache.orc.impl.ReaderImpl.getStatistics(ReaderImpl.java:359)
	at org.apache.orc.tools.FileDump.printMetaDataImpl(FileDump.java:366)
	at org.apache.orc.tools.FileDump.printMetaData(FileDump.java:276)
	at org.apache.orc.tools.FileDump.main(FileDump.java:137)
	at org.apache.orc.tools.Driver.main(Driver.java:124)


After adding

    fileFooter.clear_statistics();

to   void WriterImpl::writeFileFooter() {

the problem with fileStats.size() = 22 is gone.


java -jar ../java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta c++-flushing.orc
Processing data file c++-flushing.orc [length: 3680]
Structure for c++-flushing.orc
File Version: 0.12 with ORC_CPP_ORIGINAL by ORC C++ 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from c++-flushing.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 0 sum: 0
  Stripe 2:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 9 sum: 45
  Stripe 3:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 18 sum: 90
  Stripe 4:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 27 sum: 135
  Stripe 5:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 36 sum: 180
  Stripe 6:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 45 sum: 225
  Stripe 7:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 54 sum: 270
  Stripe 8:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 63 sum: 315
  Stripe 9:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 72 sum: 360
  Stripe 10:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 81 sum: 405
fileStats.size() = 2
i = 0, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 1, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false min: 0 max: 81 sum: 2025

Stripes:
  Stripe: offset: 3 data: 2 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 3 length 2
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
Exception in thread "main" org.apache.orc.protobuf.InvalidProtocolBufferException: While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.
	at org.apache.orc.protobuf.InvalidProtocolBufferException.truncatedMessage(InvalidProtocolBufferException.java:107)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readRawBytesSlowPathOneChunk(CodedInputStream.java:2984)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readBytesSlowPath(CodedInputStream.java:3035)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readBytes(CodedInputStream.java:2446)
	at org.apache.orc.OrcProto$StripeFooter.<init>(OrcProto.java:16930)
	at org.apache.orc.OrcProto$StripeFooter.<init>(OrcProto.java:16864)
	at org.apache.orc.OrcProto$StripeFooter$1.parsePartialFrom(OrcProto.java:18562)
	at org.apache.orc.OrcProto$StripeFooter$1.parsePartialFrom(OrcProto.java:18556)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:86)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:91)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:48)
	at org.apache.orc.protobuf.GeneratedMessageV3.parseWithIOException(GeneratedMessageV3.java:357)
	at org.apache.orc.OrcProto$StripeFooter.parseFrom(OrcProto.java:17342)
	at org.apache.orc.impl.RecordReaderUtils$DefaultDataReader.readStripeFooter(RecordReaderUtils.java:97)
	at org.apache.orc.impl.RecordReaderImpl.readStripeFooter(RecordReaderImpl.java:432)
	at org.apache.orc.tools.FileDump.printMetaDataImpl(FileDump.java:383)
	at org.apache.orc.tools.FileDump.printMetaData(FileDump.java:276)
	at org.apache.orc.tools.FileDump.main(FileDump.java:137)
	at org.apache.orc.tools.Driver.main(Driver.java:124)

hinxx@obzen ~/ess/orc-flushing/orc-git/flushing $ ./test1
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 3
indexLength: 0
dataLength: 2
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 1
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 0
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 0
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 0, numStripes 1
writeIntermediateFooter 444: lastFlushOffset 162
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 30
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 2
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 27
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 10
statistics {
  numberOfValues: 10
  hasNull: false
}
statistics {
  numberOfValues: 10
  intStatistics {
    minimum: 0
    maximum: 0
    sum: 0
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 1, numStripes 2
writeIntermediateFooter 444: lastFlushOffset 357
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 59
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 3
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 56
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 20
statistics {
  numberOfValues: 20
  hasNull: false
}
statistics {
  numberOfValues: 20
  intStatistics {
    minimum: 0
    maximum: 9
    sum: 45
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 2, numStripes 3
writeIntermediateFooter 444: lastFlushOffset 588
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 88
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 4
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 85
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 30
statistics {
  numberOfValues: 30
  hasNull: false
}
statistics {
  numberOfValues: 30
  intStatistics {
    minimum: 0
    maximum: 18
    sum: 135
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 3, numStripes 4
writeIntermediateFooter 444: lastFlushOffset 854
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 117
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 5
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 114
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 40
statistics {
  numberOfValues: 40
  hasNull: false
}
statistics {
  numberOfValues: 40
  intStatistics {
    minimum: 0
    maximum: 27
    sum: 270
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 4, numStripes 5
writeIntermediateFooter 444: lastFlushOffset 1157
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 146
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 6
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 143
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 146
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 50
statistics {
  numberOfValues: 50
  hasNull: false
}
statistics {
  numberOfValues: 50
  intStatistics {
    minimum: 0
    maximum: 36
    sum: 450
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 5, numStripes 6
writeIntermediateFooter 444: lastFlushOffset 1497
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 175
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 7
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 172
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 146
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 175
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 60
statistics {
  numberOfValues: 60
  hasNull: false
}
statistics {
  numberOfValues: 60
  intStatistics {
    minimum: 0
    maximum: 45
    sum: 675
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 6, numStripes 7
writeIntermediateFooter 444: lastFlushOffset 1873
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 204
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 8
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 201
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 146
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 175
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 204
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 70
statistics {
  numberOfValues: 70
  hasNull: false
}
statistics {
  numberOfValues: 70
  intStatistics {
    minimum: 0
    maximum: 54
    sum: 945
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 7, numStripes 8
writeIntermediateFooter 444: lastFlushOffset 2285
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 233
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 9
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 230
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 146
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 175
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 204
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 233
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 80
statistics {
  numberOfValues: 80
  hasNull: false
}
statistics {
  numberOfValues: 80
  intStatistics {
    minimum: 0
    maximum: 63
    sum: 1260
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 8, numStripes 9
writeIntermediateFooter 444: lastFlushOffset 2735
writeIntermediateFooter 447: <<<
writeIntermediateFooter 432: >>>
writeIntermediateFooter 434: stripeRows > 0: 10
writeStripe 569: stripeInfo.PrintDebugString()
offset: 262
indexLength: 0
dataLength: 4
footerLength: 25
numberOfRows: 10
writeStripe 573: fileFooter.stripes_size() = 10
writeStripe 575: fileFooter.PrintDebugString()
headerLength: 3
contentLength: 259
stripes {
  offset: 3
  indexLength: 0
  dataLength: 2
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 30
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 59
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 88
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 117
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 146
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 175
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 204
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 233
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
stripes {
  offset: 262
  indexLength: 0
  dataLength: 4
  footerLength: 25
  numberOfRows: 10
}
types {
  kind: STRUCT
  subtypes: 1
  fieldNames: "col1"
  maximumLength: 0
  precision: 0
  scale: 0
}
types {
  kind: INT
  maximumLength: 0
  precision: 0
  scale: 0
}
numberOfRows: 90
statistics {
  numberOfValues: 90
  hasNull: false
}
statistics {
  numberOfValues: 90
  intStatistics {
    minimum: 0
    maximum: 72
    sum: 1620
  }
  hasNull: false
}
rowIndexStride: 0
writer: 1
softwareVersion: "1.9.0-SNAPSHOT"
writeIntermediateFooter 437: stripesAtLastFlush 9, numStripes 10
writeIntermediateFooter 444: lastFlushOffset 3222
writeIntermediateFooter 447: <<<
close 400: >>>
close 408: <<<


fileStats.size() = 2
i = 0, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 1, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false min: 0 max: 81 sum: 2025

Stripes:

HK: stripeStart = 3
  Stripe: offset: 3 data: 2 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 3 length 2
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2

HK: stripeStart = 30

Exception in thread "main" org.apache.orc.protobuf.InvalidProtocolBufferException: While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.
	at org.apache.orc.protobuf.InvalidProtocolBufferException.truncatedMessage(InvalidProtocolBufferException.java:107)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readRawBytesSlowPathOneChunk(CodedInputStream.java:2984)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readBytesSlowPath(CodedInputStream.java:3035)
	at org.apache.orc.protobuf.CodedInputStream$StreamDecoder.readBytes(CodedInputStream.java:2446)
	at org.apache.orc.OrcProto$StripeFooter.<init>(OrcProto.java:16930)
	at org.apache.orc.OrcProto$StripeFooter.<init>(OrcProto.java:16864)
	at org.apache.orc.OrcProto$StripeFooter$1.parsePartialFrom(OrcProto.java:18562)
	at org.apache.orc.OrcProto$StripeFooter$1.parsePartialFrom(OrcProto.java:18556)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:86)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:91)
	at org.apache.orc.protobuf.AbstractParser.parseFrom(AbstractParser.java:48)
	at org.apache.orc.protobuf.GeneratedMessageV3.parseWithIOException(GeneratedMessageV3.java:357)
	at org.apache.orc.OrcProto$StripeFooter.parseFrom(OrcProto.java:17342)
	at org.apache.orc.impl.RecordReaderUtils$DefaultDataReader.readStripeFooter(RecordReaderUtils.java:97)
	at org.apache.orc.impl.RecordReaderImpl.readStripeFooter(RecordReaderImpl.java:432)
	at org.apache.orc.tools.FileDump.printMetaDataImpl(FileDump.java:384)
	at org.apache.orc.tools.FileDump.printMetaData(FileDump.java:276)
	at org.apache.orc.tools.FileDump.main(FileDump.java:137)
	at org.apache.orc.tools.Driver.main(Driver.java:124)

The stripe ( > 1 ) offsets are not accounting for the file footer + metadata + postscript size before
initializing next stripe!!

After adding the lines:


      currentOffset = lastFlushOffset;
      printf("%s %d: currentOffset = %ld\n", __func__, __LINE__, currentOffset);
      // init stripe now that we adjusted the currentOffset
      initStripe();

to the   long WriterImpl::writeIntermediateFooter() there are no more issues!

java -jar ../java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar meta c++-flushing.orc
Processing data file c++-flushing.orc [length: 3718]
Structure for c++-flushing.orc
File Version: 0.12 with ORC_CPP_ORIGINAL by ORC C++ 1.9.0-SNAPSHOT
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from c++-flushing.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
Rows: 100
Compression: NONE
Calendar: Julian/Gregorian
Type: struct<col1:int>

Stripe Statistics:
  Stripe 1:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 0 sum: 0
  Stripe 2:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 9 sum: 45
  Stripe 3:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 18 sum: 90
  Stripe 4:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 27 sum: 135
  Stripe 5:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 36 sum: 180
  Stripe 6:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 45 sum: 225
  Stripe 7:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 54 sum: 270
  Stripe 8:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 63 sum: 315
  Stripe 9:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 72 sum: 360
  Stripe 10:
    Column 0: count: 10 hasNull: false
    Column 1: count: 10 hasNull: false min: 0 max: 81 sum: 405
fileStats.size() = 2
i = 0, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}
i = 1, schema = {"category": "struct", "id": 0, "max": 1, "fields": [
{  "col1": {"category": "int", "id": 1, "max": 1}}]}

File Statistics:
  Column 0: count: 100 hasNull: false
  Column 1: count: 100 hasNull: false min: 0 max: 81 sum: 2025

Stripes:
HK: stripeStart = 3
  Stripe: offset: 3 data: 2 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 3 length 2
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 162
  Stripe: offset: 162 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 162 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 359
  Stripe: offset: 359 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 359 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 593
  Stripe: offset: 593 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 593 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 864
  Stripe: offset: 864 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 864 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 1171
  Stripe: offset: 1171 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 1171 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 1515
  Stripe: offset: 1515 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 1515 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 1895
  Stripe: offset: 1895 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 1895 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 2311
  Stripe: offset: 2311 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 2311 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2
HK: stripeStart = 2765
  Stripe: offset: 2765 data: 4 rows: 10 tail: 25 index: 0
    Stream: column 1 section DATA start: 2765 length 4
    Encoding column 0: DIRECT
    Encoding column 1: DIRECT_V2

File length: 3718 bytes
Padding length: 2503 bytes
Padding ratio: 67.32%
________________________________________________________________________________________________________________________


java -jar ../java/tools/target/orc-tools-1.9.0-SNAPSHOT-uber.jar data c++-flushing.orc
[main] WARN org.apache.hadoop.util.NativeCodeLoader - Unable to load native-hadoop library for your platform... using builtin-java classes where applicable
log4j:WARN No appenders could be found for logger (org.apache.htrace.core.Tracer).
log4j:WARN Please initialize the log4j system properly.
log4j:WARN See http://logging.apache.org/log4j/1.2/faq.html#noconfig for more info.
Processing data file c++-flushing.orc [length: 3718]
[main] INFO org.apache.orc.impl.ReaderImpl - Reading ORC rows from c++-flushing.orc with {include: null, offset: 0, length: 9223372036854775807, includeAcidColumns: true, allowSARGToFilter: false, useSelected: false}
[main] INFO org.apache.orc.impl.RecordReaderImpl - Reader schema not provided -- using file schema struct<col1:int>
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":0}
{"col1":1}
{"col1":2}
{"col1":3}
{"col1":4}
{"col1":5}
{"col1":6}
{"col1":7}
{"col1":8}
{"col1":9}
{"col1":0}
{"col1":2}
{"col1":4}
{"col1":6}
{"col1":8}
{"col1":10}
{"col1":12}
{"col1":14}
{"col1":16}
{"col1":18}
{"col1":0}
{"col1":3}
{"col1":6}
{"col1":9}
{"col1":12}
{"col1":15}
{"col1":18}
{"col1":21}
{"col1":24}
{"col1":27}
{"col1":0}
{"col1":4}
{"col1":8}
{"col1":12}
{"col1":16}
{"col1":20}
{"col1":24}
{"col1":28}
{"col1":32}
{"col1":36}
{"col1":0}
{"col1":5}
{"col1":10}
{"col1":15}
{"col1":20}
{"col1":25}
{"col1":30}
{"col1":35}
{"col1":40}
{"col1":45}
{"col1":0}
{"col1":6}
{"col1":12}
{"col1":18}
{"col1":24}
{"col1":30}
{"col1":36}
{"col1":42}
{"col1":48}
{"col1":54}
{"col1":0}
{"col1":7}
{"col1":14}
{"col1":21}
{"col1":28}
{"col1":35}
{"col1":42}
{"col1":49}
{"col1":56}
{"col1":63}
{"col1":0}
{"col1":8}
{"col1":16}
{"col1":24}
{"col1":32}
{"col1":40}
{"col1":48}
{"col1":56}
{"col1":64}
{"col1":72}
{"col1":0}
{"col1":9}
{"col1":18}
{"col1":27}
{"col1":36}
{"col1":45}
{"col1":54}
{"col1":63}
{"col1":72}
{"col1":81}
________________________________________________________________________________________________________________________

Values look good..