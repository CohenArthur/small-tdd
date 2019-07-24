#include <stdio.h>
#include <err.h>
#include <string.h>

#if !defined(RED) || !defined(GRN) || !defined(RESET)
	#define RED "\x1B[31m"
	#define GRN "\x1B[32m"
	#define RESET "\x1B[0m"
#endif

#define ALERT(alert) errx(1, RED "Test failed : %s\n", alert);

#define TEST_NB 256
#define MAX_TEST_NB 4096 * 100

#define VALUE_0 0
#define VALUE_1 27
#define VALUE_2 729

/**
 * Updates std_out on the progress of the test
 * @index 	Number to display, index of the test
 * @alert 	Alert message init'd at the beginning of your test function
 */
void progress(size_t index, char *alert);

/**
 * Alerts the user for the success of the test
 * @alert 	Alert message init'd at the beginning of your test function
 */
void success(char *alert);

/**
 * Asserts that left == right for different types.
 * If left != right, the function exits with a custom message using the 'alert' parameter
 * @left 	Left value that you want to compare against
 * @right 	Right value that you want to compare against
 * @alert 	Alert message init'd at the beginning of your test function
 */
void assert_int(int left, int right, char *alert);
void assert_int_superior(int left, int right, char *alert);
void assert_int_inferior(int left, int right, char *alert);
void assert_long(long left, long right, char *alert);
void assert_double(double left, double right, char *alert);
void assert_string(char *left, char *right, char *alert);
void assert_char(char left, char right, char *alert);
