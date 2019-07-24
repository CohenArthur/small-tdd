#include "c/tdd.h"

size_t f(size_t x) {
	return x;
}

int main(void) {
	//Declare a char array containing the name of the test
	char *alert = "test_f()";
	
	//Loop with assertions and progress report
	for (size_t i = 0; i < MAX_TEST_NB; ++i) {
		assert_int(f(i), i, alert);
		progress(i, alert);
	}

	//If no error has been raised by assert_XXX(), this function is called
	success(alert);

	alert = "test_fail()";

	assert_int(1, 0, alert);

	//Because the assertion isn't correct, we'll never reach this function
	success(alert);

	return 0;
}
