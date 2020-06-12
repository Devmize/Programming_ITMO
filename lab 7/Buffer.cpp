#include "Buffer.h"

template<typename T>
void CircleBuffer<T>::push_front(T x) {
    if (_size < _capacity) {
        for (size_t i = _size; i >= 1; i--) {
            _data[i] = _data[i - 1];
        }
        _data[0] = x;
        _size++;
    }
    else {
        for (size_t i = _capacity - 1; i >= 1; i--) {
            _data[i] = _data[i - 1];
        }
        _data[0] = x;
    }
}

template<typename T>
void CircleBuffer<T>::pop_front() {
    for (size_t i = 0; i < _size - 1; i++) {
        _data[i] = _data[i + 1];
    }
    _size--;
}

template<typename T>
void CircleBuffer<T>::push_back(T x) {
    if (_size < _capacity) {
        _data[_size] = x;
        _size++;
    }
    else {
        for (size_t i = 1; i < _capacity; i++) {
            _data[i - 1] = _data[i];
        }
        _data[_capacity - 1] = x;
    }
}

template<typename T>
void CircleBuffer<T>::pop_back() {
    if (_size > 0) {
        _size--;
    }
}

template<typename T>
void CircleBuffer<T>::insert(size_t ind, T x) {
    _data[ind % _capacity] = x;
}

template<typename T>
void CircleBuffer<T>::remove(size_t ind) {
    for (size_t i = ind + 1; i < _size; i++) {
        _data[(i - 1) % _capacity] = _data[i % _capacity];
    }
    _size--;
}

template<typename T>
void CircleBuffer<T>::resize(size_t new_capacity) {
    T* new_data = new T[new_capacity];
    _size = std::min(_size, new_capacity);
    for (size_t i = 0; i < _size; i++) {
        new_data[i] = _data[i];
    }
    delete _data;
    _data = new_data;
    _capacity = new_capacity;
}

template<typename T>
void CircleBuffer<T>::insert(iterator ind, T x) {
    *(begin() + (ind - begin()) % _size) = x;
}

template<typename T>
void CircleBuffer<T>::print_info() {
    std::cout << "Capacity = " << capacity() << std::endl;
    std::cout << "Size = " << size() << std::endl;
}