#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	while(i)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
