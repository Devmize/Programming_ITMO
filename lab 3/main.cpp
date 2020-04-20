#include <iostream>

#include "Complex.h"
#include "Queue.h"

int main() {
    Complex a = Complex(1, -1);
    Complex b = Complex(1.1, 1.1);
    a.Show();

    (a * 10.1).Show();
    (a + b).Show();
    (a * b).Show();
    std::cout << a.Length();

    std::cout << std::endl << std::endl;



    Queue q = Queue();
    int f;
    bool x = true;
    while (x) {
        std::cin >> f;
        switch(f) {
            case 1:
                int k;
                std::cin >> k;
                q << k;
                break;
            case 2:
                q >> 0;
                break;
            case 3:
                q.displayQueue();
            default:
                x = false;
        }
    }


    return 0;
}