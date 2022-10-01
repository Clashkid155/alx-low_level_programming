#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* main - Print all argument passed
* @argc: Argument count
* @argv: Array of argument
*
* Return: Int
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
