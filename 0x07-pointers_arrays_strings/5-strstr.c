#include "main.h"
#include <string.h>

/**
* _strstr - man ...
* @haystack: Go to hell
* @needle: Fast!!
*
* Return: Needle if found or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
