#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - Print numbers followed by \n
* @separator: Separate them
* @n: Number of int
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list st;

	if (separator == NULL)
		separator = "";
	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(st, int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(st);
}
