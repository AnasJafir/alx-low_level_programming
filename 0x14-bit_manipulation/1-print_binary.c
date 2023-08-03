#include "main.h"
/**
 * print_binary - convert a decimal to binary
 * @n: integer to convert
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int printed = 0;
	unsigned long int x;
	int i;

	for (i = num_bits - 1; i >= 0; i--)
	{
		x = 1UL << i;
		if (n & x)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed || i == 0)
			_putchar('0');
	}
	if (printed == 0)
		_putchar('0');
}
