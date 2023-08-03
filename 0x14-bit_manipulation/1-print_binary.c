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

	while (num_bits)
	{
		if (n & 1L << --num_bits)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
