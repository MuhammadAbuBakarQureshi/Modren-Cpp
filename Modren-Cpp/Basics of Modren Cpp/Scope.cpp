#include <iostream>
#include <print>

using namespace std;

int num;

void function() {

	int num = 10;

	println("Num value in function : {}", num);
}

int scope() {

	double num = 3.14;

	println("Num value in main : {}", num);

	function();

	return 0;
}