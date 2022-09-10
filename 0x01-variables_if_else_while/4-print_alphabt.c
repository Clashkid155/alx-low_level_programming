#include <stdio.h>


/**
* main - Skip q and e
*
* Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
{
	if (ch == 101 || ch == 113)
		continue;
	putchar(ch);
}
	putchar(10);
	return (0);
}
