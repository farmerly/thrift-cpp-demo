cc = g++
Library_Dir = -L /usr/lib64 -lthrift
Include_Dir = -I /usr/include
obj = main.o thrift_handle.o DemoService.o demo_struct_types.o
exe = thrift-example
gdb =

$(exe):$(obj)
	$(cc) $(obj) $(gdb) -o $(exe) $(Library_Dir)
main.o:
	$(cc) -c $(gdb) src/main.cpp $(Include_Dir)
thrift_handle.o:
	$(cc) -c $(gdb) src/thrift_handle.cpp $(Include_Dir)
DemoService.o:
	$(cc) -c ${gdb} thrift-itf/gen-cpp/DemoService.cpp $(Include_Dir)
demo_struct_types.o:
	$(cc) -c ${gdb} thrift-itf/gen-cpp/demo_struct_types.cpp $(Include_Dir)


.PHONY:clean
clean:
	rm -f *.o $(exe)
