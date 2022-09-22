#include "main.h"


#define COMMA 44
#define SEMICOLON 59
#define DOT 46
#define EXCLAMATION 33
#define QUOTE 34
#define BRACKETOPEN 40
#define BRACKETCLOSE 41
#define PARENTHESESOPEN 123
#define PARENTHESESCLOSE 125
#define SPACE 32
#define NEWLINE 10
#define TABSPACE 9

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
* cap_string - Make first letter uppercase
* @s: Input
*
* Return: Modified string
*/

char *cap_string(char *s)
{
	int i, temp;

	for (i = 0; i < _strlen(s) - 1; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			temp = s[i - 1];
			if (temp == SPACE || temp == NEWLINE || temp == TABSPACE || temp == DOT)
			{
				s[i] = s[i] - 32;
			}

		}

	}
	return (s);
}
