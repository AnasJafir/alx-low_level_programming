#include "main.h"
/**
 * print_square - print the square of numbers
 *
 * @size: integer type input
 *
 * Return: Always 0 ( Success)
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
			_putchar(35);
		_putchar('\n');
	}
}
