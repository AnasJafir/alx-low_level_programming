#include "lists.h"
/**
 * _strlen - calculate the length of a string
 * @str: string input
 * Return: length of the string
*/
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
