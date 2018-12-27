#include "birthday.h"
#include <iostream>

using namespace std;

Birthday::Birthday(unsigned int d, unsigned int m, unsigned int y) {
	day=d;
	month=m;
	year=y;
}

void Birthday::printDate() {
	cout << "Birthday at:" << endl;
	printf("%02d:%02d:%04d\n", day, month, year);
}