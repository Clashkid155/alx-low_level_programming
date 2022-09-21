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
* _strncat - Concatenate two string but stop at n
*
* @dest: Destination string
* @src: Source string
* @n: Number of string to take from src
*
* Return: Modified string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, k, len;

	k = _strlen(dest);
	len = _strlen(src);
	n > len ? n = len : n;

	for (i = 1; i <= n; i++)
		dest[(k + i) - 1] = src[i - 1];
	return (dest);
}
