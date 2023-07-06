#include "main.h"
/**
 * _pow_recursion - raise a number to the power of another number
 * @x: input integer
 * @y: input integer
 *
 * Return: -1 if y is less than 0
 *          1 if y is equal to 0
 *          otherwise returns x to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
