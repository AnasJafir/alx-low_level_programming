#include "main.h"
/**
 * times_table- print times table
*/
void times_table(void)
{
	int y;
	int z;

	for (y = 0; y <= 9; y++)
	{
		for (z = 0; z <= 9; z++)
		{
			if ((y * z) <= 9)
			{
				_putchar((y * z) + 48);
			}
			if ((y * z) > 9)
			{
				_putchar(((y * z) / 10) + 48);
				_putchar(((y * z) % 10) + 48);
			}
			if (z != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
