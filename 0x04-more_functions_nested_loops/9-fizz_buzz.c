#include <stdio.h>

/**
* main - Print 1 to 100 then replace multiples of 3 with Fizz
* and multiples of 5 with Buzz then multiples of both with
 * FizzBuzz
 *
 * Return: 1
*/

int main(void)
{
	int i;
	const char fizz[] = "Fizz";
	const char buzz[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s%s", fizz, buzz);
		} else if (i % 3 == 0)
		{
			printf("%s", fizz);
		} else if (i % 5 == 0)
		{
			printf("%s", buzz);
		} else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
