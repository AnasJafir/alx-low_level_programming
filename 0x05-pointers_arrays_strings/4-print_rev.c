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
		i++;
	}
	while(i)
	{
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
