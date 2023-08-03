#include "main.h"
/**
 * print_binary - convert a decimal to binary
 * @n: integer to convert
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int total = 0;
	int count = 0;
	int digit[32];
	int temp;

	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		temp = n % 2;
		digit[count] = temp;
		n /= 2;
		total++;
		count++;
	}
	while (count > 0)
	{
		_putchar('0' + digit[count - 1]);
		count--;
	}
}
