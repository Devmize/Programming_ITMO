#pragma once

#include <vector>

class Queue {
private:
    int _front;
    int _back;
    int array[100]{};
    size_t _size = 100;
public:
    Queue();
    bool isEmpty();
    void displayQueue();
    int getFront();
    int getBack();
    int operator>>(int);
    void operator<<(int number);
};