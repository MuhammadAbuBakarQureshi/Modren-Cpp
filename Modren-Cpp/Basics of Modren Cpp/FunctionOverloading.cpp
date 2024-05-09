#include <iostream>
#include <print>

using namespace std;

void myFunction(int num) {

	cout << "f(): int: " << num << endl;
}

void myFunction(double num) {

	cout << "f(): double: " << num << endl;
}

int functionOverloading() {

	myFunction(1);

	myFunction(2.5);

	myFunction('a');

	myFunction(0.5f);

	return 0;
}