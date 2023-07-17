#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees a dog
 * @d : the dog
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
