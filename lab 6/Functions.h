#pragma once

template<typename T, typename Object>
bool all_of(T begin, T end, bool (&function)(Object)) {
    int a = 0;
    for (auto i = begin; i != end; i = next(i)) {
        if (!function(*i)) {
            a++;
        }
    }
    return a == 0;
}

template<typename T, typename Object>
bool is_partitioned(T begin, T end, bool (&function)(Object)) {
    int a = 0;
    for (auto i = begin; i != end; i = next(i)) {
        if (function(*i) != function(*next(i))) {
            a++;
        }
    }
    return a == 1;
}

template<typename T, typename Object>
bool find_backward(T begin, T end, bool (&function)(Object)) {
    T i = end;
    while (i != begin) {
        if (function(*i)) {
            std::cout << "Element: ";
            return true;
        }
        i--;
    }
    if (function(*begin)) {
        std::cout << "Element: ";
        return true;
    }
    std::cout << "Element: ";
    return false;
}