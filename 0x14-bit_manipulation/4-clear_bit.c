#include "main.h"
/**
 * clear_bit - sets the value of bit to 0 at a given index
 * @n: number to index
 * @index: given index
 * Return: 1 on success , 0 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
