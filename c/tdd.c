#include "tdd.h"

void progress(size_t index, char *alert) {
	printf(RESET "%lu tests completed for %s\r", index, alert);
}

void success(char *alert) {
	printf(GRN "\nTest passed : %s\n" RESET, alert);
}

void assert_int(int left, int right, char *alert) {
	if (left != right) {
		printf(RED "Left : %d, Right : %d\n", left, right);
		ALERT(alert);
	}
}

void assert_int_superior(int left, int right, char *alert) {
	if (left < right) {
		printf(RED "Left : %d, Right : %d\n", left, right);
		ALERT(alert);
	}
}

void assert_int_inferior(int left, int right, char *alert) {
	if (left > right) {
		printf(RED "Left : %d, Right : %d\n", left, right);
		ALERT(alert);
	}
}

void assert_long(long left, long right, char *alert) {
	if (left != right) {
		printf(RED "Left : %ld, Right : %ld\n", left, right);
		ALERT(alert);
	}
}

void assert_double(double left, double right, char *alert) {
	if (left != right) {
		printf(RED "Left : %lf, Right : %lf\n", left, right);
		ALERT(alert);
	}
}

void assert_string(char *left, char *right, char *alert) {
	if (strcmp(left, right) != 0) {
		printf(RED "Left : %s, Right : %s\n", left, right);
		ALERT(alert);
	}
}

void assert_char(char left, char right, char *alert){
	if (left != right) {
		printf(RED "Left : %c, Right : %c\n", left, right);
		ALERT(alert);
	}
}
