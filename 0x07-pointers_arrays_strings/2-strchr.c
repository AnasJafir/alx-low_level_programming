#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: returns s[], otherwise NULL
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	int lenght = strlen(s);

	for (i = 0; i < lenght; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
