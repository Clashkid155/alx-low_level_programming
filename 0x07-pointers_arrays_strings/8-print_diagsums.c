#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Sum of diagonal
* @a: Bloody array (Square Matrix)
* @size: Array size
*/

void print_diagsums(int *a, int size)
{
	int i;
	int first = 0, second = 0;
	int ta = size * size;

	for (i = 0; i < ta; i += size + 1)
		first += a[i];
	for (i = ta - size; i > 0; i -= size - 1)
		second += a[i];
	printf("%d, %d\n", first, second);
}
