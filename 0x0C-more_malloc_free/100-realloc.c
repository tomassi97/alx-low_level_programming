#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block to a new size.
 * @ptr: The pointer to the previously allocated memory block
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: A pointer to the newly reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;
    unsigned int i, min_size;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    // Determine the minimum size between old and new sizes
    min_size = (new_size < old_size) ? new_size : old_size;

    // Allocate memory for the new block
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    // Copy data from the old block to the new block
    for (i = 0; i < min_size; i++)
    {
        new_ptr[i] = ((char *)ptr)[i];
    }

    // Free the old block
    free(ptr);

    return (new_ptr);
}
