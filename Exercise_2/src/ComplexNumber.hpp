#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double real, double imag);
    void print();
    ComplexNumber operator+(const ComplexNumber& other);
    bool operator==(const ComplexNumber& other);
    ComplexNumber conjugate();
};

#endif /* COMPLEXNUMBER_HPP */
