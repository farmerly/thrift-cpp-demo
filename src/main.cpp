#include "thrift_handle.h"
using namespace std;

int main()
{
    std::shared_ptr<DemoServiceHandler> handler(new DemoServiceHandler());
    std::shared_ptr<TProcessor> processor(new DemoServiceProcessor(handler));
    std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(8088));
    std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
    std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

    TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
    server.serve();
    return 0;
}
