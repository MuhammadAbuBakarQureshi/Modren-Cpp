#include <print>
#include <stdexcept>
using namespace std;

void throw_if_zero(int i) {
    if (!i) { // Check if i is zero
        throw runtime_error("found a zero"); // Throw an exception if it is
    }
    println("throw_if_zero(): {}", i); // Print a message with the value of i
}

int exceptions() {
    println("Entering main()");

    try {
        throw_if_zero(1);     // Call throw_if_zero with 1 (won't throw)
        throw_if_zero(2);     // Call throw_if_zero with 2 (won't throw)
        throw_if_zero(0);     // Call throw_if_zero with 0 (will throw)
        throw_if_zero(2);     // this line never execute because this program is terminate on the upper line because of 0
    }
    catch (exception& e) {
        println("Caught an exception: {}", e.what()); // Catch any exception and print its message
    }

    println("Leaving main()");

    return 0;
}