#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* str_concat - Concatenate two strings
* @s1: First string
* @s2: Second string
*
* Return: String
*/

char *str_concat(char *s1, char *s2)
{
	int slen, slen1, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	slen = strlen(s1);
	slen1 = strlen(s2);
	s = malloc(sizeof(char) * (slen1 + slen + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < slen; i++)
		s[i] = s1[i];

	for (i = 0; i < slen1; i++)
		s[i + slen] = s2[i];

	return (s);
}
