#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n : line length
*/

void print_diagonal(int n)
{
	int p = 0, s = 0, e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (p <= n)
		{
			e = p;
			while (s <= n)
			{
				if (s == n)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar (' ');
				}
				s++;
			}
			s = 0;
			p++;
		}
	}
}
