#include "largest_palindrome_product.h"

int is_palindrome(int number)
{
    int length = 0;
    int digits[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    while (number > 0)
    {
        digits[length++] = number % 10;
        number /= 10;
    }

    for (int index = 0; index < length / 2; index ++)
    {
        if (digits[index] != digits[length - index - 1])
        {
            return 0;
        }
    }
    return 1;
}

int max_number(int max_digits)
{
    int total = 1;

    for (int index = 0; index < max_digits; index ++)
    {
        total *= 10;
    }

    return total - 1;
}

long largest_palindrome_product(int number)
{
    int max = max_number(number);
    int min = max_number(number - 1);
    long largest_product = 0;

    for (int i = max; i > min; i --)
    {
        for (int j = max; j > min; j--)
        {
            long product = i * j;
            if (is_palindrome(product) && product > largest_product)
            {
                largest_product = product;
            }
        }
    }

    return largest_product;
}
