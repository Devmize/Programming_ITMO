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
        std::cout << "В векторе все элементы удовлетворяют предикату" << std::endl;
    } else {
        std::cout << "В векторе какой-то элемент не удовлетворяет предикату" << std::endl;
    }
    if (all_of(nums.begin(), nums.end(), Predicate)) {
        std::cout << "В сете все элементы удовлетворяют предикату" << std::endl;
    } else {
        std::cout << "В сете какой-то элемент не удовлетворяет предикату" << std::endl;
    }

    // Задание 6
    if (is_partitioned(numbers.begin(), numbers.end(), Predicate)) {
        std::cout << "В векторе часть элементов удовлетворяет предикату, а часть нет" << std::endl;
    } else {
        std::cout << "В векторе есть каша" << std::endl;
    }
    if (is_partitioned(nums.begin(), nums.end(), Predicate)) {
        std::cout << "В сете часть элементов удовлетворяет предикату, а часть нет" << std::endl;
    } else {
        std::cout << "В сете есть каша" << std::endl;
    }

    // Задание 8
    std::cout << find_backward(numbers.begin(), numbers.end(), Find) << std::endl;
    std::cout << find_backward(nums.begin(), nums.end(), Find) << std::endl;

    return 0;
}
