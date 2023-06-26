#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: the string
*/
void rev_string(char *s)
{
	int i, j;
	char str;

	for (i = 0; s[i] != 0; ++i)
	{
		for (j = 0; j < i / 2; j++)
		{
			str = s[j];
			s[j] = s[i - 1 - j];
			s[i - 1 - j] = str;
		}
	}
}
