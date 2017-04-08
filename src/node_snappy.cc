#include <node.h>
#include <v8.h>

#include "nan.h"

namespace node_snappy {

enum SnappyMode {
  NONE,
  COMPRESS,
  UNCOMPRESS
};

template <bool async>
NAN_METHOD(Write) {
  return Nan::ThrowError("blah");
}

extern "C"
NAN_MODULE_INIT(init) {
  Nan::SetMethod(target, "write", Write<true>);
  Nan::SetMethod(target, "writeSync", Write<false>);
}

NODE_MODULE(binding, init);

} // node_snappy