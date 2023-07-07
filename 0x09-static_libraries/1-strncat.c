#include "main.h"
/**
 * _strncat - concatenate two strings
 *            using at most n bytes from the second string
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes from the second string
 *
 * Return: returns a pointer to the modified string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
