#include "main.h"
/**
 * _abs - function to compute to absolute value of an integer
 *
 * @n : integer type input to function
 *
 * Return: returns absolute value of 'n'
*/
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar(-(n + 48));
		return (-n);
	}
}
