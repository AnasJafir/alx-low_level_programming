#include "main.h"
/**
 * times_table- print times table
*/
void times_table(void)
{
	int a, z, y;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (z = 0; z <= 9; z++)
		{
			_putchar(',');
			_putchar(' ');

			y = a * z;

			if (y <= 9)
			{
				_putchar(' ');
			}
				else
				{
					_putchar((y / 10) + 48);
					_putchar((y % 10) + 48);
				}
		}
		_putchar('\n');
	}
}
