#include <iostream>
#include <print>

using namespace std;

void myFunction(int num) {

	cout << "f(): int: " << num << endl;
}

void myFunction(double num) {

	cout << "f(): double: " << num << endl;
}

void myFunction(unsigned num) {

	cout << "f(): unsigned: " << num << endl;
}

int functionOverloading() {

	myFunction(1);

	myFunction(2.5);

	myFunction('a');

	myFunction(0.5f);

	// Add a 'u' or 'U' suffix to the literal to indicate unsigned

	myFunction(5u);

	return 0;
}