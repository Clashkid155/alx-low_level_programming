#include <stdio.h>

/**
* main - Print Hex
*
* Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 0x30; ch <= 0x39; ch++)
		putchar(ch);
	for (ch = 0x61; ch <= 0x66; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
