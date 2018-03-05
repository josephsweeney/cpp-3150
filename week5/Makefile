CC=c++
CXXFLAGS=-g --std=c++14

all: rval

rval: rval.o
	$(CC) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf *.o *~ rval

