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

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
