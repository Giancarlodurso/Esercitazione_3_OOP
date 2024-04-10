#include "ComplexNumber.hpp"
#include <iostream>

ComplexNumber::ComplexNumber(double real, double imag) : real(real), imag(imag) {}

void ComplexNumber::print() {
    if (imag >= 0)
        std::cout << real << "+" << imag << "i";
    else
        std::cout << real << imag << "i";
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) {
    return ComplexNumber(real + other.real, imag + other.imag);
}

bool ComplexNumber::operator==(const ComplexNumber& other) {
    return (real == other.real) && (imag == other.imag);
}

ComplexNumber ComplexNumber::conjugate() {
    return ComplexNumber(real, -imag);
}
