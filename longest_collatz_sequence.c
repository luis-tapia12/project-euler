#include "longest_collatz_sequence.h"
#define EVEN(n) (n / 2)
#define ODD(n) ((3 * n) + 1)

int collatz_sequence(long long number)
{
    int terms = 0;

    while (number > 1)
    {
        if (number % 2 == 0)
        {
            number = EVEN(number);
        }
        else
        {
            number = ODD(number);
        }
        terms ++;
    }

    return terms;
}

long long longest_collatz_sequence(long long number)
{
    int max_terms = 0;
    int terms = 0;

    for (int index = number; index > 1; index --)
    {
        int current_terms = collatz_sequence(index);

        if (current_terms > terms)
        {
            terms = current_terms;
            max_terms = index;
        }
    }

    return max_terms;
}
