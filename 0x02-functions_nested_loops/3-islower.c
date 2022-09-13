#include "main.h"

/**
* _islower - Lowercase
*
* @c: Function input
*
* Return: 0 not lowercase and 1 is lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
