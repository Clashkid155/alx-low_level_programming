#include "main.h"

/**
* rev_string - Print string in reverse
*
* @s: Pointer input
*/

void rev_string(char *s)
{
	int len, c;
	char *begin, *end, temp;

	begin = s;
	end = s;

	for (len = 0; len <= 1024; len++)
	{
		if (s[len] == '\0')
			break;
	}
	for (c = 0; c < len - 1; c++)
	{
		end++;
	}
	for (c = 0; c < len / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}


}
