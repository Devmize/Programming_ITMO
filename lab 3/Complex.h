#pragma once

class Complex {
private:
    double _re;
    double _im;

public:
    Complex(double, double);

    double Length();
    void Show();

    Complex operator*(double);
    Complex operator+(const Complex &);
    Complex operator*(const Complex &);
    explicit operator double();

};