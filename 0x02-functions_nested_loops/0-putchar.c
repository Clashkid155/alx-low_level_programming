#include "main.h"

/**
* main - print _putchar and a newline
*
* Return: 0
*/

int main(void)
{

	const char ch[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
