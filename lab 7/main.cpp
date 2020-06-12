#include <iostream>
#include <algorithm>

#include "Buffer.h"
#include "Buffer.cpp"

int main() {

    std::cout << "Create a buffer, where capacity = 3" << std::endl;
    std::cout << "Push 2 numbers" << std::endl;
    CircleBuffer <int> buf(3);
    buf.push_back(1);
    buf.push_back(3);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Add 2 numbers" << std::endl;
    buf.push_back(2);
    buf.push_back(5);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Change capacity to 5" << std::endl;
    std::cout << "Change number, where index = 1" << std::endl;
    std::cout << "Add number" << std::endl;
    buf.resize(5);
    buf.insert(1, -1);
    buf.push_back(-2);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Delete number, where index = 2" << std::endl;
    buf.remove(2);
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Again change capacity to 2" << std::endl;
    buf.resize(2);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Delete number" << std::endl;
    buf.pop_back();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Add 2 numbers" << std::endl;
    std::cout << "Delete number" << std::endl;
    std::cout << "Add number" << std::endl;
    buf.push_front(2);
    buf.push_front(1);
    buf.pop_front();
    buf.push_front(3);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Change first element" << std::endl;
    buf.insert(buf.begin(), -10);
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Create a buffer of 5 elements" << std::endl;
    buf = {1, 2, 4, 5, 3};
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Use std::sort to a buffer" << std::endl;
    std::sort(buf.begin(), buf.end());
    buf.print_info();
    for (int i : buf) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    return 0;
}