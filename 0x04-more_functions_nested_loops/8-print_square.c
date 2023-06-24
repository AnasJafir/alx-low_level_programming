#include "main.h"
/**
 * print_square - print the square of numbers
 *
 * @size: number of square/number of times
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(35);
		_putchar('\n');
	}
}
