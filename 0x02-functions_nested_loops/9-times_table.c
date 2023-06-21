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
			_putchar((y * z) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
