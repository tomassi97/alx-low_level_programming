#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from the given
 * starting number @n to 98, separated by commas and followed by a new line.
 * If @n is greater than 98, it counts down to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}

	printf("\n");
}
