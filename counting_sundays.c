#include "counting_sundays.h"

#define FIRST_SUNDAY_YEAR 1899
#define MONTHS 12

int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int is_leap_year(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int _offset(int year)
{
    int offset = 0;

    for (int index = FIRST_SUNDAY_YEAR; index < year; index ++)
    {
        if (is_leap_year(index))
        {
            offset += 2;
        }
        else
        {
            offset ++;
        }
    }

    return offset % 7;
}

int year_sundays(int year)
{
    int sundays = 0;
    int day = _offset(year);

    for (int index = 0; index < MONTHS; index ++)
    {
        if (day % 7 == 0)
        {
            sundays ++;
        }

        day += days[index];

        if (index == 1 && is_leap_year(year))
        {
            day ++;
        }
    }

    return sundays;
}

int counting_sundays(int start_year, int end_year)
{
    int sundays = 0;

    for (int index = start_year; index <= end_year; index ++)
    {
        sundays += year_sundays(index);
    }

    return sundays;
}
