#include "function_pointers.h"
/**
 * array_iterator - execute a function in each element of array
 * @array: input array
 * @size: the size of array
 * @action: pointer to the function to execute
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
