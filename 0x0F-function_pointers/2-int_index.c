#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: input array of integers
 * @size: size of the array
 * @cmp: pointer the function of comparison
 * Return: index of integer
 *         Otherwise, returns -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	return (-1);
}