#pragma once

#include <iostream>
#include <iterator>
#include <initializer_list>

template <class T>
class CircleBuffer {
private:
    size_t _size = 0;
    size_t _capacity = 0;
    T *_data = nullptr;

public:
    // Вложенный класс итератора
    class iterator : public std::iterator<std::random_access_iterator_tag, T> {
    private:
        T *data = nullptr;

    public:
        // Нужное для stl алгоритмов
        using difference_type = typename std::iterator<std::random_access_iterator_tag, T>::difference_type;
        difference_type operator-(const iterator &something) const {
            return data - something.data;
        }

        explicit iterator(T* start) {
            data = start;
        }
        iterator(const iterator& num) {
            data = num.data;
        }
        ~iterator() = default;

        T &operator*() {
            return *data;
        }
        T *operator->() {
            return data;
        }

        iterator operator++() {
            ++data; return *this;
        }
        iterator operator--() {
            --data; return *this;
        }
        iterator operator+(int x) {
            data = data + x; return *this;
        }
        iterator operator-(int x) {
            data = data - x; return *this;
        }

        bool operator==(const iterator &something) const {
            return data == something.data;
        }
        bool operator!=(const iterator &something) const {
            return data != something.data;
        }
        bool operator<(const iterator &something) const {
            return data < something.data;
        }
        bool operator<=(const iterator &something) const {
            return data <= something.data;
        }
        bool operator>(const iterator &something) const {
            return data > something.data;
        }
        bool operator>=(const iterator &something) const {
            return data >= something.data;
        }

    };

    // Конструкторы класса
    explicit CircleBuffer(size_t capacity) {
        _capacity = capacity;
        _data = new T[_capacity];
    }
    CircleBuffer(const CircleBuffer& other) :
            _size(other._size),
            _capacity(other._capacity),
            _data(other.data) {
    };
    ~CircleBuffer() {
        delete _data;
    }

    // Получение начала и конца массива
    iterator begin() const {
        return iterator(_data);
    }
    iterator end() const {
        return iterator(_data + _size);
    }
    // Получение капасити и размера массива
    [[nodiscard]] size_t capacity() const {
        return this->_capacity;
    }
    [[nodiscard]] size_t size() const {
        return this->_size;
    }

    // Методы класса
    void push_front(T x);
    void pop_front();
    void push_back(T x);
    void pop_back();
    void insert(size_t ind, T x);
    void insert(iterator ind, T x);
    void remove(size_t ind);
    void resize(size_t new_capacity);
    void print_info();

    // Операторы класса
    T operator[] (size_t ind) {
        return _data[ind % _capacity];
    }

    CircleBuffer& operator=(std::initializer_list<T> list) {
        _capacity = list.size();
        _data = new T[list.size()];
        for (auto it = list.begin(); it != list.end(); ++it)
            push_back(*it);
        return *this;
    }

};