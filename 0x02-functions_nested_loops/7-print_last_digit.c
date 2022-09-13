#include "main.h"

/**
* print_last_digit - Print and return last digit
*
*@n: Input
*
* Return: Last digit
*/

int print_last_digit(int n)
{
	int i = (n % 10);

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	_putchar(i + 48);
	return (i);
}
