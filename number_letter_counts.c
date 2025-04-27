#include "number_letter_counts.h"

char* under_20[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
char* ten_multiples[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

int string_length(char* string)
{
    int length = 0;

    while (string[length] != '\0')
    {
        length ++;
    }

    return length;
}

int letter_count(int number)
{
    if (number == 1000)
    {
        return string_length(under_20[1]) + string_length("thousand");
    }

    int total = 0;

    if (number >= 100)
    {
        total += string_length(under_20[number / 100]) + string_length("hundred");
        number %= 100;
        if (number > 0) {
            total += string_length("and");
        }
    }
    if (number >= 20)
    {
        total += string_length(ten_multiples[number / 10]);
        number %= 10;
    }
    total += string_length(under_20[number]);

    return total;
}

int number_letter_counts(int number)
{
    int total = 0;

    for (int index = 1; index <= number; index ++)
    {
        total += letter_count(index);
    }

    return total;
}
