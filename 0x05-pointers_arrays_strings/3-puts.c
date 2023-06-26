#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: the string
*/
void _puts(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		_puts(str);
		p++;
	}
}
