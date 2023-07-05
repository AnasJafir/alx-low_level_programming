#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string input
*/
void _print_rev_recursion(char *s)
{
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
}
