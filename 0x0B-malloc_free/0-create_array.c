#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * @size: integer input
 * @c: character input
 * Return: NULL if the size is equal to 0
 *         otherwise a pointer to the array
 *         NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	ptr = &c;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == 0)
		return (NULL);
	while (size--)
		ptr[size] = c;
	return (ptr);
	free(ptr);
}
