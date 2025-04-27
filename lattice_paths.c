#include "lattice_paths.h"

int count_active_bits(long long number)
{
    int count = 0;
    while (number > 0)
    {
        if (number % 2 == 1)
        {
            count ++;
        }
        number /= 2;
    }

    return count;
}

long long _pow(int number, int pow)
{
    long long total = 1;

    for (int index = 0; index < number; index++)
    {
        total *= pow;
    }

    return total;
}

long long lattice_paths(int number)
{
    long long paths = 0;

    for (long long index = 0; index < _pow(number * 2, 2) / 2; index ++)
    {
        if (count_active_bits(index) == number)
        {
            paths ++;
        }
    }

    return paths * 2;
}
