#include "main.h"
/**
 * more_numbers- print 10 times numbers from 0 to 14
*/
void more_numbers(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j + 48);
			if (j > 57)
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);
			}
		}
	}
	_putchar('\n');
}
