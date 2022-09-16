#include "main.h"

/**
*  print_diagonal - Draw a diagonal \
*
* @n: Input
*/

void  print_diagonal(int n)
{
	int k, j;

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			for (j = 1; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	return;
	}
	_putchar('\n');
}
