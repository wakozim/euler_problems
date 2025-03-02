#ifndef UTILS_H_
#define UTILS_H_

#include <iostream>
#include <cmath>
#include <map>

template <typename T>
void print_answer(std::string task, T answer) {
    std::cout << "---------------------" << std::endl;
    std::cout << task << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "[ANSWER] " << answer << std::endl;
}

template <typename T>
bool is_prime(T number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    
    if (number % 2 == 0 || number % 3 == 0) return false;
    
    for (T i = 5; i * i <= number; ++i) {
        while (number % i == 0) {
            return false;
        }
    }
    return true;
}

template <typename T>
T reverse_number(T number) {
    T reversed_number = 0;
    while (number > 0) {
        reversed_number *= 10;
        reversed_number += number % 10;
        number /= 10;
    }
    return reversed_number;
}

template <typename T>
std::map<T, size_t> get_prime_factors(T number)
{
    std::map<T, size_t> factors;
    for (T i = 2; i * i <= number; ++i) {
        while (number % i == 0) {
            factors[i] += 1;
            number /= i;
        }
    }
    if (number > 1) factors[number] = 1;
    return factors;
}

#endif
