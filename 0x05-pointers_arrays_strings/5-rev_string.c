#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str;

	while (*s)
	{
		s++;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		s--;
	}
	for (j = 0; j < i / 2; j++)
	{
		int x = i - 1;

		str = s[x - i];
		s[x - i] = s[i];
		s[i] = str;
	}
}
