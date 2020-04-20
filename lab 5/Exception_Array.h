#pragma once

#include <iostream>
#include <string>
#include <vector>

class NoIndex {
private:
    std::string error;
public:
    NoIndex() {
        error = "Can't find this index";
    }

    std::string whatError() {
        return error;
    }

};

template <typename T>
class MyArray {
private:
    int _size;
    std::vector<T> arr;

    void IndexSearch(T index) {
        if (index < 0 || index >= _size) {
            throw NoIndex();
        }
        std::cout << arr[index];
    }

public:
    MyArray() {
        this->_size = 0;
        arr.resize(_size);
    }

    explicit MyArray(int s) : _size(s){
        arr.resize(_size);
    }

    void EnterArray() {
        for (int i = 0; i < _size; i++) {
            std::cin >> arr[i];
        }
    }

    void SearchIndex(T index) {
        try {
            IndexSearch(index);
        }
        catch(NoIndex& error)  {
            std::cout << error.whatError() << std::endl;
        }
    }
};