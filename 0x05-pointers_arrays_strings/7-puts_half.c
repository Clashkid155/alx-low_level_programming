#include "main.h"

/**
* puts_half - Second half of a string
*
* @str: String
*/

void puts_half(char *str)
{
	int c, d;

	for (c = 0; c <= 1024; c++)
	{
		if (str[c] == '\0')
			break;
	}
	if (c % 2 == 1)
		d = c / 2;
	else
		d = (c - 1) / 2;
	for (d++; d <= c - 1; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
