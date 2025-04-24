#include <stdio.h>
#include <stdlib.h>

#include "largest_prime_factor.h"

int main()
{
    printf("%d\n", largest_prime_factor(2));
    printf("%d\n", largest_prime_factor(3));
    printf("%d\n", largest_prime_factor(5));
    printf("%d\n", largest_prime_factor(7));
    printf("%d\n", largest_prime_factor(8));
    printf("%d\n", largest_prime_factor(13195));
    printf("%d\n", largest_prime_factor(600851475143));
    return 0;
}
