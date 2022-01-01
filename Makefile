all: gcc_main clang_main

gcc_main: main.cpp
	g++ -o gcc_main -g main.cpp

clang_main: main.cpp
	clang++ -o clang_main -g main.cpp

clean:
	rm clang_main gcc_main
