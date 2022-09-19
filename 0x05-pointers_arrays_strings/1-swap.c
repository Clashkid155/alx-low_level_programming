#include "main.h"

/**
* swap_int - Swap value of two int
*
* @a: First value
* @b: Second value
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
