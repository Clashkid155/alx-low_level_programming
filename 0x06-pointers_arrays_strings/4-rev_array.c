#include "main.h"

/**
* reverse_array - I'm damn tired of this
* @a: Array
* @n: len of array
*/

void reverse_array(int *a, int n)
{
	int i, l;

	for (i = 0; i < (n / 2); i++)
	{
		l = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = l;
	}
}
