#include "main.h"
/**
 * times_table- print times table
*/
void times_table(void)
{
	int a, z;

	for (a = 0; a <= 9; a++)
	{
		for (z = 0; z <= 9; z++)
		{
			int y = a * z;

			if (y == 0)
			{
				_putchar(y + 48);
				_putchar(',');
				_putchar(' ');
			}
			else if (y <= 9)
			{
				_putchar(' ');
				_putchar(y + 48);
				_putchar(',');
				_putchar(' ');
			}
			else if (y > 9)
			{
				if (z != 9)
				{
					_putchar((y / 10) + 48);
					_putchar((y % 10) + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((y / 10) + 48);
					_putchar((y % 10) + 48);
				}
			}
		}
	}
	_putchar('\n');
}
