#include "main.h"
#include <string.h>

/**
 * _strcat - function that appends a string to another
 *
 * @dest: first string
 * @src: second string
 *
 * Return: returns the pointer of the first string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		_putchar(dest[i]);
	i++;
	_putchar(' ');
	while (src[j] != '\0')
		_putchar(src[j]);
	j++;

	_putchar('\n');
	return (dest);
}
