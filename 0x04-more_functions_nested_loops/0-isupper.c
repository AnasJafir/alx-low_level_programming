#include "main.h"
/**
 * _isupper- check for uppercase characters.
 *
 * @c: character type input
 *
 * Return: returns 1 if 'c' is uppercase, otherwise 0
*/
int _isupper(int c)
{

	while (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		c++;
	}
	return (1);
}
