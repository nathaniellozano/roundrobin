all: main.cpp roundrobin.cpp roundrobin.h
	g++ main.cpp roundrobin.cpp -o rr
clean:
	rm -f rr

