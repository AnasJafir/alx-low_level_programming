#include "main.h"
/**
 * _sqrt_recursion - calculate the natural root square
 *
 * @n: input integer
 * @i: input integer
 *
 * Return: -1 if n is less than 0
 *         otherwise returns a call to next function
*/
int _sqrt_recursion_support(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_support(n, 0));
}

/**
 * _sqrt_recursion_support - calculate the root square
 *
 * @n: input integer
 * @i: input integer
 *
 * Return: -1 if i * i is less than 0
 *         i if i * i is equal to n
 *         otherwise returns a call to the fucntion
*/
int _sqrt_recursion_support(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursion_support(n, i + 1));
}
