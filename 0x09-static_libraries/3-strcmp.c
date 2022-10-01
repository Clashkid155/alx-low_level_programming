#include "main.h"

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
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
