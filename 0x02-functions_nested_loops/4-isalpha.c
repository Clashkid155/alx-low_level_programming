#include "main.h"

/**
* _isalpha - Uppercase
*
* @c: Function input
*
* Return: 0 not lowercase and 1 is lowercase
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 95 && c <= 122))
		return (1);
	else
		return (0);
}
