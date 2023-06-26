#include "main.h"
/**
 * puts_half - prints the half of a string
 *
 * @str: the string
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	for (i /= 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
