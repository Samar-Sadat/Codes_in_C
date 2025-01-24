#include <stdio.h>

int leap_year(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            return 1;
        }
        else if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

int main()
{
    int year;
    printf("\nEnter an year: ");
    scanf("%d", &year);
    if (leap_year(year))
    {
        printf("\n%d is a leap year.\n", year);
    }
    else
    {
        printf("\n%d is not a leap year.\n", year);
    }
    printf("\n");
    return 0;
}