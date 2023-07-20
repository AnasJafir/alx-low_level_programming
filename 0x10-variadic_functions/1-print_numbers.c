#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print all numbers given as arguments
 * @separator: string separing arguments
 * @n: number of arguments
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;
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
		nums = va_arg(args, int);
		printf("%d", nums);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
