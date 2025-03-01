#include "utils.h"

#include <iostream>
#include <cmath>


int main(void)
{
    std::string task = "The sum of the squares of the first ten natural numbers is,\r\n"
"    1^2 + 2^2 + ... + 10^2 = 385.\r\n"
"The square of the sum of the first ten natural numbers is,\r\n"
"    (1 + 2 + ... + 10)^2 = 55^2 = 3025.\r\n"
"Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.\r\n"
"Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.\r\n";

    const int max = 100;

    int sum_squares = 0;
    for (int i = 1; i <= max; ++i) {
        sum_squares += std::pow(i, 2);
    }

    int square_sum = 0;
    for (int i = 1; i <= max; ++i) {
        square_sum += i;
    }
    square_sum = std::pow(square_sum, 2);

    auto hence = square_sum - sum_squares;
    print_answer(task, hence);

    return 0;
}
