#include <iostream>
#include <print>

using namespace std;

int rawStringLiterals() {

	//The 1+ trick skips the first newline character in the raw string literal.

	print(1+R"(
All in the golden afternoon
Full leisurely we glide;
For both our oars, with little skill,
By little arms are plied,
While little hands make vain pretence
Our wanderings to guide.)");
	
	
	return 0;
}