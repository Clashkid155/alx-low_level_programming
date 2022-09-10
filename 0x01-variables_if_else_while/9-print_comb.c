#include <stdio.h>

/**
* main - Print comb
*
* Return: 0
*/

int main(void)
{
	int ch;

	for (ch = 0x30; ch <= 0x39; ch++)
{
		putchar(ch);
	if (ch != 0x39)
{
		putchar(0x2C);
		putchar(0x20);
}
}
	putchar(10);
	return (0);
}
