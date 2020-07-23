#Makefile for the star-a project
CC = g++
FLAG = -Wall -std=c++17
PROG = result



all: result

result: FileBase.h FileBase.cpp
	$(CC) $(FLAG) -o $@ -I $^

clean:
	rm -rf *.o $(PROG)
