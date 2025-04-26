#include "divisible_tirangle_number.h"

long long _triangle_number(int nth)
{
    return (long long) nth * (nth + 1) / 2;
}

int _divisors(long long number)
{
    int divisors = 0;
    long long square = sqrt(number);

    for (int index = 1; index <= square; index++)
    {
        if (square * square == number && number % index == 0)
        {
            divisors ++;
        }
        else if (number % index == 0)
        {
            divisors += 2;
        }
    }

    return divisors - 1;
}

long long divisible_tirangle_number(int number)
{
    long long triangle_number = 0;
    int divisors = 0;
    int index = 1;

    while (divisors < number)
    {
        triangle_number = _triangle_number(index++);
        divisors = _divisors(triangle_number);
    }

    return triangle_number;
}
