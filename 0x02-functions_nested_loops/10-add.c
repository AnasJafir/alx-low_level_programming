#include "main.h"
/**
 * add- add two integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: returns the result
*/
int add(int a, int b)
{
	int c = a + b;

	if (c <= 9)
	{
		_putchar(c + 48);
	}
	else if (c > 9)
	{
		_putchar((c / 10) + 48);
		_putchar((c % 10) + 48);
	}
	return (c);
}
