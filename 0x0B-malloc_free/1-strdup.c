#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create a duplicate of a string
 * @str: input string
 *
 * Return: If str i NULL or if memory allocation fails, return NULL.
 *          Otherwise, returns a pointer to the duplicated string.
*/
char *_strdup(char *str)
{
	int i, j;
	char *newstr;

	if (str == NULL)
		return (NULL);

	i = strlen(str);
	newstr = (char *)malloc((i + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
	free(newstr);
}
