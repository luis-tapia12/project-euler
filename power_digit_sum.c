#include "power_digit_sum.h"

#define MAX_DIGITS 500

void initialize_number(int * number)
{
    for (int index = 0; index < MAX_DIGITS; index ++)
    {
        number[index] = 0;
    }
}

void simple_array_product(int number_a, int buffer[2])
{
    int product = number_a * 2;
    buffer[1] = product / 10;
    buffer[0] = product % 10;
}

void array_product(int* number_a, int* product)
{
    int buffer[2] = { 0, 0 };
    int accumulator = 0;

    for (int index = MAX_DIGITS - 1; index > 0; index --)
    {
        simple_array_product(number_a[index], buffer);
        product[index] = buffer[0] + accumulator;
        accumulator = buffer[1];
    }
}

void number_copy(int* source, int* target)
{
    for (int index = 0; index < MAX_DIGITS; index ++)
    {
        target[index] = source[index];
    }
}

int add_digits(int* number)
{
    int sum = 0;

    for (int index = 0; index < MAX_DIGITS; index ++)
    {
        sum += number[index];
    }

    return sum;
}

int power_digit_sum(int number)
{
    int number_a[MAX_DIGITS];
    int product[MAX_DIGITS];

    initialize_number(number_a);
    initialize_number(product);

    number_a[MAX_DIGITS - 1] = 1;

    for (int index = 0; index < number; index ++)
    {
        array_product(number_a, product);
        number_copy(product, number_a);
    }

    return add_digits(product);
}
