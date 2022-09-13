#include "main.h"

/**
* print_sign - Check if number sign
*
*@n: Input
*
* Return: -1 < 0, 0 == 0, 1 n > 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);

}
