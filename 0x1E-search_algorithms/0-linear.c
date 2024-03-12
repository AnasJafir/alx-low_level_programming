#include "search_algos.h"

/**
 * linear_search - Function to search index of a value using linear search algo
 * @array: input array
 * @size: size of array
 * @value: value to search its index
 * Return: index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
