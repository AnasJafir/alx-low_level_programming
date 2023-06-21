#include "main.h"
/**
 * times_table- print times table
*/
void times_table(void)
{
	int y = 0;
	int z;

	while (y <= 9)
	{
		z = 0;
		while (z <= 9)
		{
			_putchar((y * z) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
