#include "main.h"


#define COMMA 44
#define SEMICOLON 59
#define DOT 46
#define QUESTIONmARK 63
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
	int i, temp, d;
	int sep[13] = {COMMA, SEMICOLON, DOT, EXCLAMATION, QUESTIONmARK,
	QUOTE, BRACKETOPEN, BRACKETCLOSE, PARENTHESESOPEN,
	PARENTHESESCLOSE, SPACE, NEWLINE, TABSPACE};

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			temp = s[i - 1];
			for (d = 0; d < 13; d++)
			{
				if (temp == sep[d])
					s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
