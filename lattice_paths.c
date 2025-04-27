#include "lattice_paths.h"

long long combinatoric(int n, int k)
{
    long long total = 0;

    return total;
}

long long lattice_paths(int number)
{
    int n = number * 2;
    int k = number;
    double total = 2 * 10;

    for (int index = 1; index <= n - k - 1; index ++)
    {
        total = total * (n - index) / (k - index);
    }

    return (long long) total / 10;
}
