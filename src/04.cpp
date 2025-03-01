#include "utils.h"

#include <iostream>


int main(void)
{
    std::string task =
        "A palindromic number reads the same both ways. "
        "The largest palindrome made from the product of "
        "two 2-digit numbers is 9009 = 91 × 99.\r\n"
        "Find the largest palindrome made from "
        "the product of two 3-digit numbers.";

    int largest_palindrome = 0;
    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            int number = j * i;
            if (number < largest_palindrome) continue;
            if (number != reverse_number(number)) continue;
            largest_palindrome = number;
        }
    }
    print_answer(task, largest_palindrome);
    return 0;
}
