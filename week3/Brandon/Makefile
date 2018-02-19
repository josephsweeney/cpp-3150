CC=c++
CXXFLAGS=-g --std=c++14

all : main

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c  $^

main: main.o Inventory.o Order.o 
	$(CC) $(CXXFLAGS) -o $@ $?

clean:
	rm -rf *.o *~ main

