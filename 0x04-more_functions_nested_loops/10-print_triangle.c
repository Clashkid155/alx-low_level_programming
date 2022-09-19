#include "main.h"

/**
*  print_triangle - Print a triangle with #
*
*  @size: Input
*/

void print_triangle(int size)
{

	int k, j;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - k - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
		return;
	}
	_putchar('\n');

}
