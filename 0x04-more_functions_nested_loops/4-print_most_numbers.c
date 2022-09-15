#include "main.h"

/**
*  print_most_numbers - Print number except 2 and 4
*/

void print_most_numbers(void)
{
	char ch = 48;

	for (; ch < 58; ch++)
	{
		if (ch == 50 || ch == 52)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
