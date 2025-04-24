#include "smallest_multiple.h"

long long smallest_multiple(int number)
{
    long long multiple = number;

    for (int index = 1; index <= number; index ++)
    {
        if (multiple % index != 0)
        {
            multiple ++;
            index = 1;
        }
    }
    return multiple;
}
