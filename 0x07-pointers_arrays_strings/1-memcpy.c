#include "main.h"

/**
* _memcpy - Fill s with b
*
* @dest: The char
* @src: What to fill or input to s
* @n: Amount to fill
*
* Return: Pointer to s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		dest[i] = src[i];
	return (dest);
}
