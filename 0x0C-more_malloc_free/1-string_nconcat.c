#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to the new allocated memory
 *         NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = strlen(s1);
	length2 = strlen(s2);
	ptr = malloc(sizeof(char) * (length1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	if (n >= length2)
	{
		n = length2;
	}
	strncpy(ptr, s1, length1);
	strncpy(ptr + length1, s2, n);
	ptr[length1 + n] = '\0';
	return (ptr);
	free(ptr);
}
