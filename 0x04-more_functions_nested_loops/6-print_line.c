#include "main.h"
/**
 * print_line - print a straight line
 *
 * @n: integer type input
 *
 * Return: result of drawing lines
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
			_putchar('\n');
		}
	}
}
