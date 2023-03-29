/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.apache.orc.examples;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hive.ql.exec.vector.BytesColumnVector;
import org.apache.hadoop.hive.ql.exec.vector.LongColumnVector;
import org.apache.hadoop.hive.ql.exec.vector.VectorizedRowBatch;
import org.apache.orc.OrcFile;
import org.apache.orc.TypeDescription;
import org.apache.orc.Writer;

import java.io.IOException;
import java.nio.charset.StandardCharsets;

public class CoreWriterMy {
  public static void main(Configuration conf, String[] args) throws IOException {
    conf.set("orc.compress", "NONE");
    conf.set("orc.stripe.size", "20");
    TypeDescription schema = TypeDescription.fromString("struct<col1:int>");
    Writer writer = OrcFile.createWriter(new Path("java-original.orc"),
                                         OrcFile.writerOptions(conf)
                                          .setSchema(schema));
    VectorizedRowBatch batch = schema.createRowBatch();
    LongColumnVector x = (LongColumnVector) batch.cols[0];
    for(int s=0; s < 10; ++s) {
      batch.size = 0;
      for(int r=0; r < 10; ++r) {
        x.vector[r] = r * s;
      }
      batch.size = 10;
      writer.addRowBatch(batch);
      batch.reset();
    }
    writer.close();
  }

  public static void main(String[] args) throws IOException {
    main(new Configuration(), args);
  }
}
