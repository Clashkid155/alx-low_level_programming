#include <stdio.h>

/**
* main - Print alphabet in reverse
*
* Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
