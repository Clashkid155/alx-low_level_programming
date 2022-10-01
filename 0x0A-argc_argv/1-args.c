#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* main - Print number of argument passed
* @argc: Argument count
* @argv: Array of argument
*
* Return: Int
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (argc * 0);
}
