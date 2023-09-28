#include "main.h"

/**
 * is_divisible - Tests whether the number is divisible.
 * @n: The number being tested.
 * @div: The divisor.
 *
 * Description: The function determines whether the number is divisible
 * by the divisor and returns the result.
 *
 * Return: 0 if divisible, 1 otherwise.
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}

	if (div == n / 2)
	{
		return (1);
	}

	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - Checks if the integer is a prime number.
 * @n: The number being tested.
 *
 * Description: The function tests whether the number is a prime number
 * and returns the appropriate result.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}
