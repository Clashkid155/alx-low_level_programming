#include "main.h"

/**
 * is_prime_number - Check if prime
 * @n: Input
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5)
	{
		return (1);
	}
	else if (n > 1)
	{
		if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0))
		{
			return (1);
		}
	}
	return (0);
}
