CC=gcc
CPPC=g++

all: c cpp

c: c/tdd.c test.c
	$(CC) -o test_c test.c c/tdd.c

cpp: cpp/tdd.cpp test.cpp
	$(CPPC) -o test_cpp test.cpp cpp/tdd.cpp

clean:
	${RM} test_c test_cpp *.o *.d
