#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: a pointer to a 2D integer array
 */

int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width == 0 || height == 0)
    {
        return NULL;
    }

    // Allocate memory for rows
    grid = (int **)malloc(sizeof(int *) * height);
    if (grid == NULL)
    {
        return NULL;
    }

    // Allocate memory for columns and initialize to 0
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            // Free previously allocated memory on failure
            for (j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }
    return grid;
}
