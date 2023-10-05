#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: A pointer to a newly allocated space in memory
 *         containing the concatenated string,
 *         or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int i = 0, j = 0, k;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1
    while (s1[i])
        i++;

    // Calculate the length of s2
    while (s2[j])
        j++;

    // Limit n to the length of s2
    if (n >= j)
        n = j;

    j = 0;

    // Allocate memory for the concatenated string
    result = malloc(sizeof(char) * (i + n + 1));
    if (result == NULL)
        return (NULL);

    // Copy characters from s1 to the result
    for (k = 0; k < i; k++)
        result[k] = s1[k];

    // Concatenate characters from s2 up to n
    for (; k < (i + n); k++)
        result[k] = s2[k - i];

    // Null-terminate the concatenated string
    result[k] = '\0';

    return (result);
}
