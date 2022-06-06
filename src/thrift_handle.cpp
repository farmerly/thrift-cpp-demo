#include "thrift_handle.h"

void DemoServiceHandler::example( ::demo_struct::DemoStruct& _return, const int32_t dataId)
{
    _return.result = true;
}
