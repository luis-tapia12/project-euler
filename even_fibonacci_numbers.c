#include "even_fibonacci_numbers.h"

int next_fibonacci(int first, int second)
{
    return first + second;
}

int even_fibonacci_numbers(int number)
{
    int total = 2;
    int first = 1;
    int second = 2;
    int next = 0;

    while (next < number)
    {
        next = next_fibonacci(first, second);

        if (next % 2 == 0)
        {
            total += next;
        }

        first = second;
        second = next;
    }

    return total;
}
