#include "function_pointers.h"
/**
 * array_iterator - execute a function in each element of array
 * @size: size of array
 * @array: input array
 * @action: pointer to the function to execute
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
