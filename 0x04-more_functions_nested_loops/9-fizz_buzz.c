#include <stdio.h>

/**
* main - Print 1 to 100 ...
*
* Return: 0 for good luck
*/

int main(void)
{
	int i = 1;

	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0  && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
