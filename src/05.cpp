#include "utils.h"

#include <iostream>
#include <cmath>
#include <map>


int main(void)
{
    std::string task =
        "2520 is the smallest number that can be divided "
        "by each of the numbers from 1 to 10 "
        "without any remainder.\r\n"
        "What is the smallest positive number "
        "that is evenly divisible by all of "
        "the numbers from 1 to 20?";

    std::map<int, size_t> numbers;
    for (int i = 2; i <= 20; ++i) {
        auto factors = get_prime_factors(i);
        for (const auto& [n, count] : factors) {
            if (numbers[n] < count) numbers[n] = count;
        }
    }

    int smallest_number = 1;
    for (const auto& [n, count] : numbers) {
        smallest_number *= std::pow(n, count);
    }

    print_answer(task, smallest_number);

    return 0;
}
