#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s : input string
 * @accept: string of characters to count
 *
 * Return: returns lenght of s only characters present in accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
