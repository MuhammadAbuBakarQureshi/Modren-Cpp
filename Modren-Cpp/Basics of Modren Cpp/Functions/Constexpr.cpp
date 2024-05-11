#include <iostream>
#include <print>

using namespace std;

constexpr int greaterNumber(int num1, int num2) { // constexpr compute this function at run time

	return num1 > num2 ? num1 : num2;
}

int constexprFunction(){

	int num1 = 0, num2 = 0;

	cout << "Enter first number : ";

	cin >> num1;

	cout << "Enter second number : ";

	cin >> num2;

	int result = greaterNumber(num1, num2); 

	cout << "Greater number is : " << result << endl;

	return 0;
}