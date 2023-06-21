#include "main.h"
/**
 * times_table- print times table
*/
void times_table(void)
{
	int a, z, y;

	for (a = 0; a <= 15; a++)
	{
		_putchar(48);
		for (z = 1; z <= 15; z++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			y = a * z;

		if (y <= 9)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (y <= 99)
		{
			_putchar((y / 10) + 48);
			_putchar((y % 10) + 48);
		}
		if (y > 99)
		{
			_putchar((y / 100) + 48);
			_putchar(((y % 100) / 10) + 48);
			_putchar((y % 10) + 48);
		}
		}
		_putchar('\n');
	}
}
