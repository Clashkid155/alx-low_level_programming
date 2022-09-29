#include "main.h"

/**
* _pow_recursion - man pow
* @x: int to pow
* @y: amount of time to pow (raised to power of) or exponent
*
* Return: Int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
