#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character @c in @s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return ('\0');
}
