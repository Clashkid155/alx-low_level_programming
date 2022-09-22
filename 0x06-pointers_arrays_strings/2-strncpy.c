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
* _strncpy - Copy string based on n
*
* @dest: Destination string
* @src: Source string
* @n: Number of strings to copy
*
* Return: Modified string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, srclen, destlen;

	destlen = _strlen(dest);
	srclen = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i == destlen)
			break;
		if (i > srclen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
