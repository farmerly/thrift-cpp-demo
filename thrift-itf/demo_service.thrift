namespace cpp demo_service
namespace java org.example.thrift.DemoService

include "demo_struct.thrift"

service DemoService
{
    demo_struct.DemoStruct example(1:i32 dataId);
}


