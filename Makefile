CFLAGS=-Wall -std=c++20 -g
LFLAGS=

all: gcc_main clang_main

gcc_main: gcc_main.o
	g++ $(CFLAGS) -o gcc_main gcc_main.o $(LFLAGS)

gcc_main.o: main.cpp
	g++ $(CFLAGS) -c -o gcc_main.o main.cpp

clang_main: clang_main.o
	clang++ $(CFLAGS) -o clang_main clang_main.o $(LFLAGS)

clang_main.o: main.cpp
	clang++ $(CFLAGS) -c -o clang_main.o main.cpp

clean:
	rm -f *.o clang_main gcc_main

