#include <stdio.h>
#include <stdlib.h>

#include "even_fibonacci_numbers.h"

int main()
{
    printf("%d\n", even_fibonacci_numbers(8));
    printf("%d\n", even_fibonacci_numbers(10));
    printf("%d\n", even_fibonacci_numbers(34));
    printf("%d\n", even_fibonacci_numbers(60));
    printf("%d\n", even_fibonacci_numbers(1000));
    printf("%d\n", even_fibonacci_numbers(100000));
    printf("%d\n", even_fibonacci_numbers(4000000));
    return 0;
}
