#include "utils.h"

#include <iostream>


int main()
{
    std::string task =
        "If we list all the natural "
        "numbers below 10 that are multiples of 3 or 5, "
        "we get 3, 5, 6 and 9. "
        "The sum of these multiples is 23.\n"
        "Find the sum of all the multiples of 3 or 5 "
        "below 100.";

    int sum = 0;
    for (int i = 1; i < 1000; ++i) {
        if ((i % 3 == 0) || (i % 5 == 0)) sum += i;
    }

    print_answer(task, sum);

    return 0;
}
