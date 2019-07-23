#include "tdd.h"

using namespace std;

UnitTest::UnitTest(string alert_message) {
	u_alert = alert_message;
}

UnitTest::~UnitTest() {}

void UnitTest::alert() {
	cerr << RED "Test failed : " << u_alert << endl;
	exit(-1);
}

void UnitTest::progress(size_t index) { //FIXME
	printf(RESET "%lu tests completed for %s\r", index, u_alert.c_str());
}

void UnitTest::success() { //FIXME
	printf(GRN "\nTest passed : %s\n" RESET, u_alert.c_str());
}

void UnitTest::assert_int(int left, int right) {
	if (left != right)
		alert();
}

void UnitTest::assert_long(long left, long right) {
	if (left != right)
		alert();
}

void UnitTest::assert_double(double left, double right) {
	if (left != right)
		alert();
}

void UnitTest::assert_char(char left, char right) {
	if (left != right)
		alert();
}

void UnitTest::assert_string(string left, string right) {
	if (left.compare(right) != 0)
		alert();
}

void UnitTest::assert_bool(bool left, bool right) {
	if (left != right)
		alert();
}
