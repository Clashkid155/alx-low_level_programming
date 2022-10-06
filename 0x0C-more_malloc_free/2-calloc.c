#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
* _calloc - Allocate memory to an array
* @nmemb: Number of elements in array
* @size: Size of array
*
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	memset(mem, 0, nmemb * size);
	return (mem);
}
