#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - How many times will i concat?
* @s1: Main string
* @s2: String
* @n: Amount of s2 to copy to s1
*
* Return: String
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arrstr;
	unsigned int l1, l2, l, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n >= l2)
		n = l2;

	l = l1 + n;

	arrstr = malloc(l + 1);

	if (arrstr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < l1)
			arrstr[i] = s1[i];
		else
			arrstr[i] = s2[i - l1];
	}
	arrstr[i] = '\0';

	return (arrstr);
}
