#include "main.h"

/**
* puts2 - Print even no
*
* @str: Useless input
*/

void puts2(char *str)
{
	int i, k;

	for (i = 0; i <= 1024; i++)
	{
		if (str[i] == '\0')
			break;
		k = str[i] - '0';
		if (k % 2 == 0)
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n');

}
