#include "main.h"
/**
 * _memset - fills a memory area with a constant byte
 *
 * @s: a pointer to an memory area
 * @n: bytes of the memory area
 * @b: constant byte
 *
 * Return: returns a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
