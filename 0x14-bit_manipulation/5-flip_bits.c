#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number input
 * @m: second number input
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_value = n ^ m;
	unsigned int i = 0;

	while (XOR_value)
	{
		if (XOR_value & 1ul)
			i++;
		XOR_value = XOR_value >> 1;
	}
	return (i);
}
