#include "main.h"

/**
* _strlen - Check string len
*
* @s: char of string
*
* Return: Length
*/

int _strlen(char *s)
{
	int c;
	int size = (int) sizeof(s) * 1024;

	for (c = 0; c <= size; c++)
	{
		if (s[c] == '\0')
			break;
	}
	return (c);
}
