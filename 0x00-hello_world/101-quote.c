#include <stdio.h>

/**
* main - Print to standard error
*
* Return: 1
*/

int main(void)
{
	const char parts[] = "and that piece of art is useful\"";

	fprintf(stderr, "%s - Dora Korpar, 2015-10-19\n", parts);
	return (1);
}
