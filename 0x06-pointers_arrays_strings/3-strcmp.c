#include "main.h"

/**
* _strlen - Check string length
*
* @s: Input string.
*
* Return: string length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
* _strcmp - Comapre two strings
*
* @s1: First string
* @s2: Second string
*
* Return: - if s1 is > s2 else if s2 is > return + else 0
*/

int _strcmp(char *s1, char *s2)
{
	int i, k;

	i = _strlen(s1);
	k = _strlen(s2);

	if (i != k || s1[i - 1] != s2[i - 1])
		return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
	return (0);
}
