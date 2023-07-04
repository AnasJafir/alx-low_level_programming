#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: returns a pointer to the beginning of needle
 *         otherwise returns NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}
	return ('\0');
}
