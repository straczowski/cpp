#include <iostream>
using namespace std;

float app_number = 0.0;

int myMethod();

int main() {
	cout << "Let's Go!" << endl;
	app_number = 2.0;
	myMethod();
	return 0;
};

int myMethod() {
	cout << "you are in excercise " << app_number << endl;
	return 0;
};



