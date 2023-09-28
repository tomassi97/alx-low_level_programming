#include "main.h"

/**
 * _sqrt - Finds the square root of a value.
 * @prev: The previous value.
 * @root: The square value.
 *
 * Return: The square root.
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}

	return (_sqrt(prev + 1, root));
}

/**
 * _sqrt_recursion - Recursive square root of a number.
 * @n: The integer.
 *
 * Return: Square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
