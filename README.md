# Small TDD

`small-tdd` is a small and simple library to allow easy assertions in your C and C++ projects. 
You can simply insert it in your projects as it is very lightweight : It only contains a header and a source file.

Choose your language, between C and C++, and simply add it to your project.

To compile with it, simply add the source file as you would for any source file.

For example, 
```
gcc -o main main.c tdd.c
```

# Why ?

I wrote it so you didn't have to.

# How to make sure it works

Simply compile it using `make`. `make c` will create a binary using the C version of the lib, while `make cpp` while use the C++ version.
You can then run `./test_c` or `./test_cpp` to make sure it works on your system (even though there's no reason it wouldn't work).

The output expected is as follow : 
```
 ./test_cpp 
409599 tests completed for test_f()
Test passed : test_f()
Left : 1, Right : 0
Test failed : test_fail()
```

You can change the compilers you wish to use by editing the Makefile. `CC` is the C compiler, `CPPC` is the C++ compiler.

# License

Feel free to use it, tweak it, change it to your liking. If you feel something needs to be added, please add a new issue or make a pull request !