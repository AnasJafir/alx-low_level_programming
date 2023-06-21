#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		if (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		j++;
	}
	_putchar('\n');
}
