#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 *
 * @dest: The destination string where the concatenation will be stored.
 * @src: The source string to concatenate.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int src_len = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
        dest_len++;

    // Find the length of src
    while (src[src_len] != '\0')
        src_len++;

    // Concatenate at most n characters from src to dest
    for (int i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len++] = src[i];

    // Add null terminator to the end of dest
    dest[dest_len] = '\0';

    return dest;
}

