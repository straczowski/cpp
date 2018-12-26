#include <iostream>

using namespace std;

int main() {
	
	int a = 0;

	cout << "A integer has " << sizeof(int) << " bytes " << endl;
	cout << "Please enter a integer value: " << endl;
	cin >> a;

	cout << "The value you input is " << a << endl;
	return 0;
}