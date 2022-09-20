#include "main.h"

/**
* _strcpy - Copy string to another variable
*
* @dest: Where to copy to
* @src: Source
*
* Return: String
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
