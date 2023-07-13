#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - funtion allocates memory
 * @b: input integer
 * Return: a pointer to the allocated memory
 *         otherwise NULL
*/
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
