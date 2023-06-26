#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string
*/
void print_rev(char *s)
{
	while (*s == 'v' && *s < '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
