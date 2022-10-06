#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - How any times will i concat?
* @s1: Main string
* @s2: String
* @n: Amount of s2 to copy to s1
*
* Return: String
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, str2, str1;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	str2 = strlen(s2);
	str1 = strlen(s1);
	if (n >= str2)
		n = str2;

	str = malloc(sizeof(s1) + n);

	if (str == NULL)
		return (NULL);


	for (i = 0; s1[i] != 0; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[str1 + i] = s2[i];
	str[str1 + n + 1] = 0;

	return (str);
}
