#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strdup - Duplicate string with malloc
* @str: Input String
*
* Return: The malloc created string/char
*/

char *_strdup(char *str)
{
	char *st;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;

	st = malloc(sizeof(*str) * len);

	if (st == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		st[i] = str[i];
	return (st);
}
