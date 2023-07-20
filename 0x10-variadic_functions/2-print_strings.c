#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function prints strings
 * @separator: strings separator
 * @n: number of strings
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);
		printf("%s", strings);
		if (strings == NULL)
			printf("(nil)");
		else if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
