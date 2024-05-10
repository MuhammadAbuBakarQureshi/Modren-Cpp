#include <iostream>
#include <print>

using namespace std;

auto get_Numbers() {

	cout << "Enter integer : ";

	int integer;
	
	cin >> integer;

	cout << "Enter decimal : ";
	
	double decimal;

	cin >> decimal;

	cout << "Enter character : ";

	char character;

	cin >> character;

	return tuple{ integer, decimal, character };

}

int returnTuple() {

	auto [integer, decimal, character] = get_Numbers();

	cout << "Integer value is : " << integer << endl;

	cout << "Decimal value is : " << decimal << endl;

	cout << "Character : " << character << endl;

	return 0;
}