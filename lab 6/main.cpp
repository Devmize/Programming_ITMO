#include <iostream>
#include <vector>
#include <set>

#include "Functions.h"

bool Predicate(int a) {
    return a < 10;
}

bool Find(int a) {
    return a == 5;
}

int main() {

    std::vector<int> numbers = {1, 2, 3, 3, 2, 1};
    std::set<int> nums = {1, 2, 5, 3, 4};

    // Задание 1
    if (all_of(numbers.begin(), numbers.end(), Predicate)) {
        std::cout << "In vector all elements are good" << std::endl;
    } else {
        std::cout << "Vector has a problem" << std::endl;
    }
    if (all_of(nums.begin(), nums.end(), Predicate)) {
        std::cout << "In set all are good" << std::endl;
    } else {
        std::cout << "Set has a problem" << std::endl;
    }

    // Задание 6
    if (is_partitioned(numbers.begin(), numbers.end(), Predicate)) {
        std::cout << "In vector all are good" << std::endl;
    } else {
        std::cout << "Vector has a problem" << std::endl;
    }
    if (is_partitioned(nums.begin(), nums.end(), Predicate)) {
        std::cout << "In set all are good" << std::endl;
    } else {
        std::cout << "Set has a problem" << std::endl;
    }

    // Задание 8
    std::cout << find_backward(numbers.begin(), numbers.end(), Find) << std::endl;
    std::cout << find_backward(nums.begin(), nums.end(), Find) << std::endl;

    return 0;
}