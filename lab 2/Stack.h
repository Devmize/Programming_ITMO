#pragma once

#include <vector>

class Stack {
private:
    size_t _maxsize;
    std::vector<int> _data;
    size_t _size;

public:
    Stack();
    explicit Stack(int);
    Stack(const Stack &);

    Stack &operator=(const Stack &);
    ~Stack();

    void Push(int);
    int Pop();
    int Top() const;
    size_t Size() const;
    void Show() const;
    bool Empty() const;
};