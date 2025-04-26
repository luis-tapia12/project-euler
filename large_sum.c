#include "large_sum.h"

long long pow(int number, int pow)
{
    long long total = 1;

    for (int index = 0; index < pow; index ++)
    {
        total *= 10;
    }

    return total;
}

long long last_ten_digits(char* number, int length, int offset)
{
    long long sum = 0;

    for (int index = 0; index < 10; index ++)
    {
        int digit = number[length - index - offset - 1] - 48;
        sum += pow(10, index) * digit;
    }

    return sum;
}

int digits_length(long long number)
{
    long long total = 0;
    char digits[100];
    int size = 0;

    while (number > 0)
    {
        digits[size++] = (number % 10) + 48;
        number /= 10;
    }

    return size;
}

long long large_sum(char* numbers[], int length)
{
    long long large_sum = 0;
    long long prev_sum = 0;

    for (int offset = 0; offset <= 40; offset += 10)
    {
        long long sum = prev_sum;

        for (int index = 0; index < length; index ++)
        {
            sum += last_ten_digits(numbers[index], 50, offset);
        }
        prev_sum = sum / 10000000000;
        large_sum = sum + prev_sum;
    }

    int size = digits_length(large_sum);

    return large_sum / pow(10, size - 10);
}
