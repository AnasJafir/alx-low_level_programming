#include "main.h"
/**
 * print_to_98- print all natural number from 'n' to 98
 *
 * @n: integer type input
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		_putchar((n / 100) + 48);
		_putchar((n % 100) + 48);
		_putchar((n % 10) + 48);
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	n++;
	_putchar((98 / 10) + 48);
	_putchar((98 % 10) + 48);
	_putchar('\n');
}
