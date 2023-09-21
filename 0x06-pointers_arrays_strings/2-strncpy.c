#include "main.h"

/**
 * custom_strncat - Concatenate strings up to a specified length.
 * @dest: String to concatenate to.
 * @src: String to concatenate.
 * @n: Maximum length to concatenate.
 * Return: A pointer to the concatenated string.
 */
char *custom_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0' && dest_len < 97 && src_len < n)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';

	return dest;
}

