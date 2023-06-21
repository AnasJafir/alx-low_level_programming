#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while (j < 10)
	{
		if (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		j++;
	}
	_putchar('\n');
}
