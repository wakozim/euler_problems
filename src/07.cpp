#include "utils.h"

#include <iostream>


int main(void)
{
    std::string task = 
        "By listing the first six prime numbers: "
        "2,3,5,7,11, and 13, we can see that "
        "the 6th prime is 13.\r\n"
        "What is the 10 001st prime number?";
    
    int number = 1;
    int prime = 0;
    for (int i = 0; i < 10'001; ++i) {
        while (true) {
            ++number;
            if (is_prime(number)) {
                prime = number;
                break;
            }
        }
    }
     
    print_answer(task, prime);
    return 0;
}

