#include "main.h"
#include <string.h>

/**
 * _strspn - man strspn
 * @s: string
 * @accept: string
 *
 * Return: number of bytes from s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, k, total = 0;
	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		int found = 0;

		for (k = 0; k < len2; k++)
		{
			if (accept[k] == s[i])
			{
				found = 1;
				break;

			}
		}
			if (!found)
			{
				break;
			}
			else
			{
				total++;
			}

	}
	return (total);
}
