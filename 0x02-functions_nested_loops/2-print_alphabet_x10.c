#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, each followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i, j;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

