#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything in any format
 * @format: constant char pointer that specifies format of string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list input;

	va_start(input, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(input, int));
				break;
			case 'i':
				printf("%d", va_arg(input, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(input, double));
				break;
			case 's':
				s = va_arg(input, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
					|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(input);
}
