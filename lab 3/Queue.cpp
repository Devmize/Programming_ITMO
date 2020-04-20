#include <iostream>

#include "Queue.h"

Queue::Queue() : _front(-1), _back(-1) {}

bool Queue::isEmpty() {
    return getFront() == -1 && getBack() == -1;
}

int Queue::getBack() {
    return this->_back;
}

int Queue::getFront() {
    return this->_front;
}

void Queue::displayQueue() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        for (int i = getFront(); i <= getBack(); i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
}

//void Queue::operator>>(int) {
//    if (isEmpty()) {
//        std::cout << "Queue is empty" << std::endl;
//    } else if (getFront() == getBack()) {
//        this->_front = this->_back = -1;
//    } else {
//        this->_front++;
//    }
//}


void Queue::operator<<(int number) {
    if (getBack() == this->_size - 1) {
        std::cout << "Queue is full" << std::endl;
    } else {
        if (getFront() == -1) {
            this->_front = 0;
        }
        this->_back++;
        array[this->_back] = number;
    }
}

int Queue::operator>>(int ) {
    std::cout << array[this->_front] << std::endl;
}