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
	int i = strlen(str);
	int j = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	newstr = (char *)malloc((i + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);
	while (j < i)
	{
		newstr[j] = str[j];
		j++;
	}
	return (newstr);
	free(newstr);
}
