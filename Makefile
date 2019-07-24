all: c cpp

c: test.c c/tdd.c
	gcc -o test_c test.c c/tdd.c

cpp: test.cpp cpp/tdd.cpp
	g++ -o test_cpp test.cpp cpp/tdd.cpp

clean:
	${RM} test_c test_cpp *.o *.d
