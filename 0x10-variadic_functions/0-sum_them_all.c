#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * Return: sum ot arguemnts
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int num;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
