#include "main.h"
#include <stddef.h>

/**
* _strchr - Find a char and cut the string from there
* @s: Input
* @c: Where to cut
*
* Return: Cut string
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (c == *s)
			return (s);
	}
	return (NULL);
}

