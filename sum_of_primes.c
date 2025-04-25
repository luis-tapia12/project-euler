#include "sum_of_primes.h"

#define SIZE 4000000

long long sum_of_primes(int number)
{
    long long total = 0;
    int* primes = (int *) malloc(SIZE * sizeof(number));
    int primes_length = 1;
    primes[0] = 2;

    while (primes[primes_length - 1] < number)
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

    for (int index = 0; index < primes_length - 1; index ++)
    {
        total += primes[index];
    }

    return total;
}
