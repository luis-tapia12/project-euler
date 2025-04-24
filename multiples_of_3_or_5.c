#include "multiples_of_3_or_5.h"

int multiples_of_3_or_5(int number)
{
    int total = 0;
    for (int index = number - 1; index >= 0; index--)
    {
        if (index % 3 == 0 || index % 5 == 0)
        {
            total += index;
        }
    }
    return total;
}

