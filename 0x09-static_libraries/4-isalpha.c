#include "main.h"
/**
 * _isalpha - function to check if
 *            character is uppercase or lowercase
 *
 * @c: character to check
 *
 * Return: returns 1 if 'c' is lowercase or uppercase
 *         otherwise always 0 (Success)
*/
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
