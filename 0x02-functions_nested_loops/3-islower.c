#include "main.h"

/**
 * _islower - function to check if
 *            character is lowercase
 *
 *@c: check input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
*/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
