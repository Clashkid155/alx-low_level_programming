#include "main.h"

/**
* puts2 - Print even no
*
* @str: Useless input
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i <= 1024; i++)
	{
		if (str[i] == '\0')
			break;
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
