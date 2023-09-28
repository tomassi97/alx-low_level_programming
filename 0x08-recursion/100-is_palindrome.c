#include "main.h"

/**
 * length - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * help - Compares characters of the string recursively.
 * @i: Index to compare.
 * @s: The string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int help(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		return (help(i + 1, s + 1));
	}
	return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (help(i, s));
}
