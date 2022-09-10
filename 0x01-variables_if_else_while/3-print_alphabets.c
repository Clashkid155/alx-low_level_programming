#include <stdio.h>

/**
* main - Mixed alphaBET
*
* Return: 0
*/

int main(void)
{
	char ch = 97;
	int first = 0;

	for (ch = 97; ch <= 123; ch++)
{
	putchar(ch);
	if (ch == 122 && first == 0)
{
		ch = 64;
		first += 1;
}
	if (first == 1 && ch == 90)
		break;
}
	putchar(10);
	return (0);
}
