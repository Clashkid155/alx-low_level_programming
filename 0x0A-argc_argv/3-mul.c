#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: argument count as int which counts and stores no of command line arg
 * @argv: argument array of character pointers listing all the arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 2)
	{
		int x = strtol(argv[1], NULL, 10);
		int y = strtol(argv[2], NULL, 10);

		result = x * y;

		printf("%d\n", result);
	}
	return (0);
}
