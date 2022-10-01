#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - check code
 * @argc: argument count as int which counts and stores no of command line arg
 * @argv: argument array of character pointers listing all the arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
