#include <iostream>
#include <print>

using namespace std;

inline void swap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;
}

int inlineFunction() {

	int num1, num2;

	cout << "Enter first number : ";

	cin >> num1;

	cout << "Enter second number : ";

	cin >> num2;

	cout << "Before Swap: Num1 = " << num1 << "  num2 = " << num2 << endl;

	swap(num1, num2);

	cout << "After Swap: Num1 = " << num1 << "  num2 = " << num2 << endl;

	return 0;
}