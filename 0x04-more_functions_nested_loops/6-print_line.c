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

	while (i = n)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
		i++;
		_putchar('\n');
	}
}
