#include "amicable_numbers.h"

int add_digits(int* number, int length)
{
    int sum = 0;

    for (int index = 0; index < length; index ++)
    {
        sum += number[index];
    }

    return sum;
}

int divisor_sum(int number)
{
    int divisor[100];
    int length = 0;

    for (int index = 1; index < sqrt(number); index ++)
    {
        if (number % index == 0)
        {
            int oposite = number / index;
            divisor[length ++] = index;

            if (oposite != number)
            {
                divisor[length ++] = oposite;
            }
        }
    }

    return add_digits(divisor, length);
}

int amicable_numbers(int number)
{
    int sum = 0;

    for (int index = number; index > 0; index --)
    {
        int a = divisor_sum(index);
        int b = divisor_sum(a);

        if (index == b && a != index)
        {
            sum += index;
            //printf("Amicable numbers: %d-%d-%d\n", index, a, b);
        }
    }

    return sum;
}
