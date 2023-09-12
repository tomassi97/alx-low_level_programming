#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Always print 0 as the first digit */
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			product = row * column;

			/* Print the product with proper formatting */
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(' '); /* Add a space for single-digit products */
				_putchar(product + '0');
			}

			/* Add comma and space unless it's the last column */
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
