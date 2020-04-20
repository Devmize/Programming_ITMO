#include <iostream>

#include "Stack.h"

Stack::Stack() : _maxsize(1000), _data(std::vector<int>(_maxsize)), _size(0) { }

Stack::Stack(int size) : _maxsize(size), _data(std::vector<int>(_maxsize)), _size(0) { }

Stack::Stack(const Stack &copy) : _maxsize(copy._maxsize), _data(copy._data), _size(copy._size) { }

Stack& Stack::operator=(const Stack &copy) {
    this->_maxsize = copy._maxsize;
    this->_data = copy._data;
    this->_size = copy._size;
    return *this;
}
Stack::~Stack() = default;

void Stack::Push(int element) {
    if (this->_size == this->_maxsize) {
        std::cout << "You cant do this! Stack is overflow.";
    }
    this->_data[this->_size++] = element;
}

int Stack::Pop() {
    if (this->_size == 0) {
        std::cout << "Stack is empty!";
    }
    return this->_data[--this->_size];
}

int Stack::Top() const {
    if (this->_size == 0) {
        std::cout << "Stack is empty!";
    }
    return this->_data[this->_size - 1];
}

size_t Stack::Size() const {

    return this->_size;
}

bool Stack::Empty() const {
    return this->_size;
}

void Stack::Show() const {
    std::cout << "Content: ";
    for (int i = 0; i < this->_size; ++i) {
        std::cout << this->_data[i];
        if (i + 1 < this->_size) {
            std::cout << ",";
        }
    }
}