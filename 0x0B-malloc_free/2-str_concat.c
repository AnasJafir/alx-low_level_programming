#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - function that concatenates two strings
* @s1: input first string
* @s2: input second string
* Return: returns a pointer to the concatenated string
*         if NULL is passed of function fails, it returns NULL.
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	i = strlen(s1);
	j = strlen(s2);
	newstr = (char *)malloc((i + j + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);
	strcpy(newstr, s1);
	strcat(newstr, s2);
	return (newstr);
	free(newstr);
}
