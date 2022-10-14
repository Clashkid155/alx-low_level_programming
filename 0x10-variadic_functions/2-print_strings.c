#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Print strings followed by \n
* @separator: Separate them
* @n: Number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list st;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(st, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(st);
}
