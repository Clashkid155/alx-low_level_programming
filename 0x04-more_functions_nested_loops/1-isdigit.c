#include "main.h"

/**
* _isdigit - Check if it's a digit
*
* @c: The input
*
* Return: 1 - digit, 0 - lowercase
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
