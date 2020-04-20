#include <cmath>
#include <iostream>

#include "Complex.h"

Complex::Complex(double _re, double _im) : _re(_re), _im(_im) {}

double Complex::Length() {
    return sqrt(this->_re * this->_re + this->_im * this->_im);
}

Complex::operator double() {
    return this->Length();
}

Complex Complex::operator*(double x) {
    return Complex(this->_re * x, this->_im * x);
}

Complex Complex::operator+(const Complex &c) {
    return Complex(this->_re + c._re, this->_im + c._im);
}

Complex Complex::operator*(const Complex &c) {
    return Complex(this->_re * c._re - this->_im * c._im, this->_re * c._im + this->_im * c._re);
}

void Complex::Show() {
    std::cout << this->_re;
    if (this->_im > 0) {
        std::cout << " + " << this->_im << "i" << std::endl;
    } else if (this->_im < 0) {
        std::cout << " - " << abs(this->_im) << "i" << std::endl;
    }
    if (this->_im == 0) {
        std::cout << std::endl;
    }
}