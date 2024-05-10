#include <iostream>
#include <print>

using namespace std;

void static_Variable_Function() {

	static int num = 10;

	cout << num << endl;

	num--;

	if (num < 0) {

		cout << "Blastoff!" << endl;
	}
}


// Different threads calling the same function that has a static variable will lead to unpredictable results.
// In real code there will almost always be a better way of doing things than using a static variable.


int staticVariable() {


// Modify this program so that it counts from 10 down to 0 and then outputs Blastoff!
// Don't use loop

	static_Variable_Function();
	
	static_Variable_Function();

	static_Variable_Function();
	
	static_Variable_Function();

	static_Variable_Function();
	
	static_Variable_Function();
	
	static_Variable_Function();

	static_Variable_Function();

	static_Variable_Function();

	static_Variable_Function();

	static_Variable_Function();

	return 0;
}