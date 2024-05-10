#include <iostream>
#include <print>

using namespace std;

auto sum(int a,int b) {

	int result = a + b;
	
	return result;
}

int returnType() {


	int res = sum(4, 3);

	cout << res;

	return 0;
}