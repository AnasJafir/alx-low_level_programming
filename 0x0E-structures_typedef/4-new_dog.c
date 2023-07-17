#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns length of a string
 * @str: string input
 * Return: the length of str
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies a string from source to destination
 * @src: source string
 * @dst: destination string
 * Return: dst
*/
char *_strcpy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: NULL if function fails
 *         Otherwise, a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
