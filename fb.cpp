// FizzBuzz in C++
#include <iostream>
using str = std::string;
#define LOG(x) std::cout << x << std::endl;
int main() {
    std::cout << "FizzBuzz!\n";
    int rangeAAA[100];
    for (int C = 0; C < 100; C++) { rangeAAA[C] = C+1; }
    for (int i = 1; i <= 100; i++) {
        str out;
        if ( (i % 3) == 0 ) {
            out += "Fizz";
        } if ( (i % 5) == 0 ) {
            out += "Buzz";
        }
        // out will contain fizz if 3, buzz if 5, and fizzbuzz if 3 AND 5.
        if (out.empty()) { LOG(i); }
        else { LOG(out); }
    }
}
