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
* string_toupper - Change to uppercase
* @s: Input
*
* Return: Modified string
*/

char *string_toupper(char *s)
{
	int i, offset;

	offset = 32; /*a - A (65 - 97)*/

	for (i = 0; i <= _strlen(s); i++)
		if (s[i] <= 122 && s[i] >= 97)
			s[i] = s[i] - offset;
	return (s);

}
