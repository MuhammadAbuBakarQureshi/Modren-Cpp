#include <iostream>
#include <print>

using namespace std;

int arrayWhileLoop() {

	char str[24];

	cout << "Please enter a string ( up to " << size(str) << " characters) : ";

	cin.getline(str, size(str));

	const char* ptr = str;

	while (*ptr) { // Loop repeats untill \0 comes in the string

		cout << *ptr ;

		++ptr;
	}

	return 0;
}