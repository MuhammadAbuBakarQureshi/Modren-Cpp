#include <iostream>
#include <print>
#include <cstdlib> // Library used for terminate() function

using namespace std;

[[noreturn]] void divisionError() {

	cout << "You cannot divide by zero" << endl;

	terminate();
}

int nonReturningFunction() {

	float num1, num2, res;

	cout << "Enter First Number : ";

	cin >> num1;

	cout << "Enter Second Number : ";

	cin >> num2;

	if (num2 == 0) {

		divisionError();
	}
	else {

		res = num1 / num2;
	}

	cout << "Result of division of two numbers : " << res << endl;

	return 0;
}