#include <iostream>
#include "Exception_Array.h";
#include "Swap.h"

int main() {
    // Swap
    int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << std::endl << "Enter b: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << std::endl;

    // Index
    int size;
    std::cout << "Enter size array: ";
    std::cin >> size;
    MyArray<int> arr(size);
    std::cout << "Enter Array:" << std::endl;
    arr.EnterArray();
    int index;
    std::cout << "Enter index: ";
    std::cin >> index;
    arr.SearchIndex(index);

    return 0;
}