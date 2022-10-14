#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Sum whole value
* @n: Number of parameter
*
* Return: Sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list st;

	if (n == 0)
		return (0);

	va_start(st, n);

	for (i = 0; i < (int)n; i++)
		sum += va_arg(st, int);
	va_end(st);

	return (sum);
}
