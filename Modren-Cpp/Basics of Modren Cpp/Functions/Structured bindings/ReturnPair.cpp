#include <iostream>
#include <print>

using namespace std;

auto getNumbers() {

	cout << "Enter integer value : ";

	int integer;

	cin >> integer;

	cout << "Enter decimal value : ";

	double decimal;

	cin >> decimal;

	return pair{ integer, decimal };

}

int returnPair() {


	auto [a, b] = getNumbers();

	cout << "Value of integer : " << a << endl;

	cout << "Value of Decimal : " << b << endl;

	return 0;
}