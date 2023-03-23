#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 0;
	int i;

	for (i = 0; i < month - 1; i++)
	{
		total_days += days_in_month[i];
	}
	total_days += day;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		{
			total_days++;
		}

		printf("Day of the year: %d\n", total_days);
		printf("Remaining days: %d\n", 366 - total_days);
	}
	else
	{
		if (month == 2 && day == 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", total_days);
			printf("Remaining days: %d\n", 365 - total_days);
		}
	}
}
