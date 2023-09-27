#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string recursively.
 * @s: The string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);  /* Using write to print newline */
		return;
	}

	write(1, s, 1);
	_puts_recursion(s + 1);
}
