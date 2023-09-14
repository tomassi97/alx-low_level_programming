#include <stdio.h>
#include "main.h"

/**
 * convert_day - converts day of month to day of year, accounting for leap years
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of year
 */
int convert_day(int month, int day, int year)
{
    int day_of_year = 0;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }

    day_of_year += day;
    return day_of_year;
}

/**
 * print_remaining_days - takes a date and prints how many days are left in the year
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int day_of_year = convert_day(month, day, year);

    if (day_of_year > 365 || (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 366 - day_of_year);
    }
    else
    {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 365 - day_of_year);
    }
}

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 1;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    print_remaining_days(month, day, year);

    month = 2;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    print_remaining_days(month, day, year);

    return (0);
}
