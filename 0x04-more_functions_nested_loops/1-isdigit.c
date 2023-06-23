#include "main.h"
/**
 * _isdigit- check for a digit
 *
 * @c : digit to input
 *
 * Return: returns 1 if c a digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
