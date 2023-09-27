#include "main.h"

/**
 * _pow_recursion - Computes the power of an integer.
 * @x: The base integer.
 * @y: The exponent.
 *
 * Return: -1 if y is less than 0, the result of x raised to y otherwise.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Return -1 for negative exponent */
		return (-1);
	}

	if (y > 0)
	{
		/* Compute power recursively */
		return (x * _pow_recursion(x, y - 1));
	}
	
	/* Base case for y = 0 */
	return (1);
}
