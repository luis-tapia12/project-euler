#include "special_pythagorean_triplet.h"

int special_pythagorean_triplet(int number)
{
    for (int a = 1; a < number; a ++)
    {
        for (int b = a + 1; b < number; b ++)
        {
            for (int c = b + 1; c < number; c ++)
            {
                if (a + b + c == number && a < b && b < c && (c * c) == (a * a) + (b * b))
                {
                    return a * b * c;
                }
            }
        }
    }

    return 0;
}
