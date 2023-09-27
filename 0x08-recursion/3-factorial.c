#include "main.h"

/**
 * factorial - Computes the factorial of an integer.
 * @n: The integer for which factorial is to be computed.
 *
 * Return: -1 if n is less than 0, 1 if n is 0, else the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		/* Return -1 for negative input */
		return (-1);
	}
	else if (n == 0)
	{
		/* Return 1 for n = 0 */
		return (1);
	}
	else
	{
		/* Compute factorial recursively */
		return (n * factorial(n - 1));
	}
}
