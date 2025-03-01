#include "utils.h"

#include <iostream>


int main(void)
{
    std::string task =
        "The prime factors of 13195 are 5,7,13 and 29.\r\n"
        "What is the largest prime factor of "
        "the number 600851475143?";
    //long long int number = 13195;
    long int number = 600851475143;

    long int largest_factor = 0;
    for (long int i = 2; i * i <= number; ++i) {
        while (number % i == 0) {
            largest_factor = i;
            number /= i;
        }
    }
    if (number > 1) largest_factor = number;
    print_answer(task, largest_factor);
    return 0;
}
