#include "main.h"

/**
*  print_square - Print a square with #
*
*  @size: Input
*/

void print_square(int size)
{
	int k, j;

	if (size > 0)
	{
		for (k = 1; k <= size ; k++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		return;
	}
	_putchar('\n');

}
