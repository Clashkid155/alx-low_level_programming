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
* _strcat - Concatenate two string
*
* @dest: Destination string
* @src: Source string
*
* Return: Modified string
*/

char *_strcat(char *dest, char *src)
{
	int i, k;

	k = _strlen(dest);

	for (i = 1; i <= _strlen(src); i++)
		dest[(k + i) - 1] = src[i - 1];
	return (dest);
}
