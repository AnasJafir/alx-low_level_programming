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
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		if (j < n)
		{
			dest[i] = '\0';
			j++;
		}
		j++;
	}
	return (dest);
}
