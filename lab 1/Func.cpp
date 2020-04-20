#include "Func.h"

// Задание 2
void reference_number2(int &x, int &y) {
    x += y;
}

void pointer_number2(int *x, const int *y) {
    *x += *y;
}

// Задание 7
void reference_number7(int &whole, double &real) {
    whole = -whole;
    real = -real;
}

void pointer_number7(int *whole, double *real) {
    *whole = -*whole;
    *real = -*real;
}

// Задание 10
void reference_number10(double &b) {
    b = -b;
}

void pointer_number10(double *b) {
    *b = -*b;
}

// Задание 15
void reference_number15(double (&mat)[3][3], double &element) {
    for (auto & i : mat) {
        for (double & j : i) {
            j *= element;
        }
    }
}

void pointer_number15(double mat[3][3], const double *element) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] *= *element;
        }
    }
}