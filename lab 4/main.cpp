#include <iostream>

#include "Segment.h"
#include "Isosceles_Trapezium.h"

int main() {
    // Отрезок
    Segment seg;
    std::cout << seg.classname() << std::endl;
    seg.initFromDialog();
    seg.draw();
    std::cout << "Size = " << seg.size() << std::endl;
    std::cout << std::endl;

    // Равнобедренная трапеция
    IsoscelesTrapezium trap;
    std::cout << trap.classname() << std::endl;
    trap.initFromDialog();
    trap.draw();
    std::cout << "Size = " << trap.size() << std::endl;

    return 0;
}
