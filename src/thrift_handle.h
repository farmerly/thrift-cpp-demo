#ifndef THRIFT_HANDLE_SERVICE_H_H_H
#define THRIFT_HANDLE_SERVICE_H_H_H

#include "../thrift-itf/gen-cpp/DemoService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;
using namespace ::demo_service;

class DemoServiceHandler : virtual public DemoServiceIf
{
public:
    DemoServiceHandler() {};
    void example( ::demo_struct::DemoStruct& _return, const int32_t dataId);
};

#endif
