#include <stdlib.h>

#include "nth_prime.h"

int nth_prime(int number)
{
    int* primes = (int*) malloc((number + 1) * sizeof(number));
    int primes_length = 1;
    primes[0] = 2;

    while (primes_length <= number)
    {
        int current = primes[primes_length - 1] + 1;

        for (int index = 0; index < primes_length; index ++)
        {
            if (current % primes[index] == 0)
            {
                current ++;
                index = -1;
            }
        }

        primes[primes_length++] = current;
    }

    return primes[number - 1];
}
