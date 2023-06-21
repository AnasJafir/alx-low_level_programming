#include "main.h"
/**
 * print_to_98- print all natural number from 'n' to 98
 *
 * @n: integer type input
*/

void print_to_98(int n)
{
	int digit;

	if (n <= 98)
	{
		for (digit = n; digit <= 98; digit++)
		{
			_putchar((digit / 10) + 48);
			_putchar((digit % 10) + 48);

			if (digit != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (digit = n; digit >= 98; digit--)
		{
			_putchar((digit / 100) + 48);
			_putchar(((digit % 100) / 10) + 48);
			_putchar((digit % 10) + 48);
			if (digit != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (digit <= 99)
			{
				_putchar((digit / 10) + 48);
				_putchar((digit % 10) + 48);
			}
		}
	}
	_putchar('\n');
}

