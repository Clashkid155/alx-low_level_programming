#include "main.h"

/**
* _puts - Print strings
*
* @str: Pointer input
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);

	}
}
