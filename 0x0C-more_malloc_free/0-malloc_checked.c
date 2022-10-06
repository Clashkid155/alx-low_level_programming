#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocate and return memory
* @b: Amount
*
* Return: Pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
