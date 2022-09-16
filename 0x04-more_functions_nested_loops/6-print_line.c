#include "main.h"

/**
* print_line - Draw a straight line
*
* @n: Input
*/

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
		return;
	}
	_putchar('\n');
}
