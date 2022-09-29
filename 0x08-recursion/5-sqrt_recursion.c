#include "main.h"

/**
 * power - I'm sorry
 * @n: Input
 * @c: Input
 *
 * Return: Int
 */

int power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power(n, c + 1));
}

/**
 * _sqrt_recursion - man sqrt
 * @n: Input
 *
 * Return: Int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}
