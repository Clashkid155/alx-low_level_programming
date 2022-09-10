#include <stdio.h>

/**
* main - Print alphabet in lower case
*
* Return: 0
*/

int main(void)
{
	char ch = 97;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
