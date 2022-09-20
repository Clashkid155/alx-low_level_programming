#include "main.h"
#include <stdio.h>

/**
* print_array - Print array content
*
* @a: first input
* @n: second input
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n - 1 != i)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
