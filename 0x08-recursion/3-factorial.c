#include "main.h"
/**
 * factorial - calculate factorial of a given number
 * @n: input integer
 *
 * Return: -1 if n is less than 0
 *         otherwise returns factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
