namespace cpp demo_struct
namespace java org.example.thrift.DemoStruct

struct DemoStruct
{
    1: bool result;
}

exception DataException
{
    1: optional string message;
    2: optional string callStack;
    3: optional string date;
}
