#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 *         Otherwise returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
