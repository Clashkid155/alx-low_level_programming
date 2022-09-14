#include "main.h"
#include <stdio.h>

/**
* print_to_98 - n till 98
*
*@n: Number
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	} else if (n == 98)
	{
		printf("98");
	} else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");

			}
		}

	}
	printf("\n");
}
