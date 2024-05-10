#include <iostream>
#include <print>

using namespace std;

void takeInt(int num) {

	cout << R"(This is "Implicit Narrowing" double to int : )" << num << endl;
}

void takeDouble(double num) {

	cout << R"(This is "Implicit Promotion" int to double : )" << num << endl;
}


int implicitConversion() {

	// Implicit Narrowing
	// double to int
	// higher data_type to lower data_type
	// It lose data (After decimal value)
	 
	takeInt(2.5);


	// Implicit Promtion
	// int to double
	// lower data_type to higher data_type

	takeDouble(3);

	return 0;
}