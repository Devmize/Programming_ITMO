#pragma once

#include <utility>

template<typename T>
void swap(T& a, T& b)
{
    T temp(std::move(a));
    a = b;
    b = temp;
}