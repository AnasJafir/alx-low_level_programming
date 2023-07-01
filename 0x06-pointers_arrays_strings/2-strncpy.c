#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes from destination string
 *
 * Return: returns a pointer to modified string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
