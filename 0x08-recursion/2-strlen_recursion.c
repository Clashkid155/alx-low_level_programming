#include "main.h"

/**
* _strlen_recursion - man strlen
* @s: String input
*
* Return: Length
*/

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
