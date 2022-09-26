#include "main.h"

/**
* _memset - Fill s with b
*
* @s: The char
* @b: What to fill or input to s
* @n: Amount to fill
*
* Return: Pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
		s[i] = b;
	return (s);
}
