#include "main.h"

/**
* times_table - 1 - 9 times table
*/

void times_table(void)
{
	int start, next, value;


	for (start = 0; start <= 9; start++)
	{
		_putchar(48);
		for (next = 1; next <= 9; next++)
		{
			value = start * next;
			_putchar(',');
			_putchar(' ');
			if (value <= 9)
			{
				_putchar(' ');
				_putchar(value + 48);
			}
			else
			{
				_putchar((value / 10) + 48);
				_putchar((value % 10) + 48);
			}
		}
		_putchar('\n');
	}

}
