#include <iostream>
#include <cmath>
#include "Func.h"

using namespace std;

int main() {
    // Задание 2
    int firstnum;
    int secondnum;
    cout << "Enter firstnum and secondnum" << endl;
    cin >> firstnum >> secondnum;
    reference_number2(firstnum, secondnum);
    cout << "Reference:" << firstnum << endl;
    cout << "Enter x and y" << endl;
    cin >> firstnum >> secondnum;
    pointer_number2(&firstnum, &secondnum);
    cout << "Point:" << firstnum << endl << endl;

    // Задание 7
    int whole;
    double real;
    cout << "Enter whole and real" << endl;
    cin >> whole >> real;
    reference_number7(whole, real);
    cout << "Reference:" << whole << " " << real << endl;
    cout << "Enter whole and real" << endl;
    cin >> whole >> real;
    pointer_number7(&whole, &real);
    cout << "Point:" << whole << " " << real << endl << endl;

    // Задание 10
    double a;
    double b;
    cout << "Complex variable view: a + bi" << endl;
    cout << "Enter a and b:" << endl;
    cin >> a >> b;
    reference_number10(b);
    if (b > 0) {
        cout << "Point: " << a << " + " << b << "i" << endl;
    } else {
        cout << "Point: " << a << " - " << abs(b) << "i" << endl;
    }
    cout << "Enter a and b:" << endl;
    cin >> a >> b;
    pointer_number10(&b);
    if (b > 0) {
        cout << "Point: " << a << " + " << b << "i" << endl;
    } else {
        cout << "Point: " << a << " - " << abs(b) << "i" << endl;
    }

    // Задание 15
    double mat[3][3];
    cout << "Enter matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
    double element;
    cout << "Enter element:" << endl;
    cin >> element;
    cout << "Reference:" << endl;
    reference_number15(mat, element);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "Enter element:" << endl;
    cin >> element;
    cout << "Point" << endl;
    pointer_number15(mat, &element);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}