#include "largest_prime_factor.h"

int largest_prime_factor(long long number)
{
    int prime = 2;

    while (number != 1)
    {
        if (number % prime == 0)
        {
            number /= prime;
        }
        else
        {
            prime ++;
        }
    }
    return prime;
}
