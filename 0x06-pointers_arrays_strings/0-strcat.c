#include "main.h"

/**
* _strlen - Check string length
*
* @s: Input string.
*
* Return: string length
*/
size_t _strlen(char *s)
{
	size_t i;

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
	size_t i, k;
	char *pstr;

	k = _strlen(dest);

	for (i = 1; i <= _strlen(src); i++)
		dest[(k + 1) - 1] = src[i];
}
