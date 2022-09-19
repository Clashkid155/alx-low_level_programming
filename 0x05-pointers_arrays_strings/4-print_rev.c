#include "main.h"

/**
* print_rev - Print string in reverse
*
* @s: Pointer input
*/

void print_rev(char *s)
{
	int c, h;

	for (c = 0; c <= 1024; c++)
	{
		if (s[c] == '\0')
			break;
	}

	for (h = --c; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
