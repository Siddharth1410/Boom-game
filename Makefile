# Suggested Makefile for CSE_1325 Homework #3
first: main.cpp Puzzle.cpp Fuse.cpp Words.cpp
	g++ --std=c++11 -o main main.cpp
	./main wordlist.txt
second: main.cpp Puzzle.cpp Fuse.cpp Words.cpp
	g++ --std=c++11 -o main main.cpp
	./main easywords.txt
clean:
	-rm -f *.o main
