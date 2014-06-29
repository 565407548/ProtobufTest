cc=g++
cflags=-g -Wall -L./include -L./
objs=obj/ReadAllContentFromFile.o
bins=bin/Test

image:$(objs) $(bins)

clear:
	rm $(objs) $(bins)

obj/ReadAllContentFromFile.o:src/ReadAllContentFromFile.cc
	$(cc) -c -o $@ $< $(cflags)

bin/Test:test/Test.cc
	$(cc) -o $@ $< $(objs)
