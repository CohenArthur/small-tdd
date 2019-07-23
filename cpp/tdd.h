#pragma once

#include <cstdio>
#include <iostream>
#include <err.h>
#include <string>
#include <cstring>

#if !defined(RED) || !defined(GRN) || !defined(RESET)
	#define RED "\x1B[31m"
	#define GRN "\x1B[32m"
	#define RESET "\x1B[0m"
#endif

//#define ALERT(alert) std::cerr << RED "Test failed : " << alert << endl;
#define TEST_NB 256
#define MAX_TEST_NB 4096 * 100

class UnitTest {
public:
	UnitTest(std::string alert);
	~UnitTest();

	/*
	 * Return different messages based on the alert passed during initiation
	 */
	void alert();
	void progress(size_t index);
	void success();

	/*
	 * Asserts that left == right for different types.
 	 * If left != right, the function exits with a custom message using the
 	 * 'alert_message' parameter of the class
	 */
	void assert_int(int left, int right);
	void assert_long(long left, long right);
	void assert_double(double left, double right);
	void assert_char(char left, char right);
	void assert_string(std::string left, std::string right);
	void assert_bool(bool left, bool right);

private:
	std::string u_alert;
};
