#include "main.h"

/**
*  more_numbers - Print number 1 - 14
*/

void more_numbers(void)
{
	int i = 0;
	int j;

	for (; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}

}
