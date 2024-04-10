#include "ComplexNumber.hpp"
#include <iostream>

int main() {
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);
    ComplexNumber c(2, 3);

    ComplexNumber result = a + b;
    result.print(); // Output: 2+0i
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << (a == b) << std::endl; // Output: false
    std::cout << (a == ComplexNumber(1, 2)) << std::endl; // Output: true

    ComplexNumber conjugateA = a.conjugate();
    conjugateA.print(); // Output: 1-2i

    return 0;
}
