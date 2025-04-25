#include "sum_square_difference.h"

int square(int number)
{
    return number * number;
}

int sum_square_difference(int number)
{
    int squares_sum = 0;
    int sums_square = 0;

    for (int index = 1; index <= number; index++)
    {
        sums_square += index;
        squares_sum += square(index);
    }

    sums_square = square(sums_square);

    return sums_square - squares_sum;
}
