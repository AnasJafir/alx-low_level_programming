#include "main.h"
/**
 * set_bit - sets the value of bit to 1 at a given index
 * @n: number to index
 * @index: given index
 * Return: 1 in success, 0 in failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
