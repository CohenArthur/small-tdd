#include "cpp/tdd.hpp"

size_t f(size_t x) {
	return x;
}

int main(void) {
	//Declare a new UnitTest instance
	UnitTest test_f("test_f()");
	
	//Loop with assertions and progress report
	for (size_t i = 0; i < MAX_TEST_NB; ++i) {
		test_f.assert_int(f(i), i);
		test_f.progress(i);
	}

	//If no error has been raised by assert_XXX(), this function is called
	test_f.success();

	UnitTest test_fail("test_fail()");

	test_fail.assert_int(1, 0);

	//Because the assertion isn't correct, we'll never reach this function
	test_fail.success();

	return 0;
}
