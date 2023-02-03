#include <stdio.h>

int main()
{
    int ref_year = 1900, year, diff, day, leap = 0, total_days = 0;
    printf("Enter the year between 1900 and 2099\n");
    scanf("%d", &year);

    diff = year - ref_year;

    while (ref_year < year)
    {
        if (ref_year % 100 == 0)
        {
            if (ref_year % 400 == 0)
            {
                leap++;
            }
        }
        else
        {
            if (ref_year % 4 == 0)
            {
                leap++;
            }
        }
        ref_year++;
    }
    total_days = (diff - leap) * 365 + leap * 366;
    day = total_days % 7;

    printf("\nThe day on 01 January %d was ", year);

    switch (day)
    {
    case 0:
        printf("Monday.\n");
        break;
    case 1:
        printf("Tuesday.\n");
        break;
    case 2:
        printf("Wednesday.\n");
        break;
    case 3:
        printf("Thursday.\n");
        break;
    case 4:
        printf("Friday.\n");
        break;
    case 5:
        printf("Saturday.\n");
        break;
    case 6:
        printf("Sunday.\n");
        break;
    }

    return 0;
}