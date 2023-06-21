#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 *
 * @n: integer type input to function
 *
 * Return: returns the last digit of 'n'
*/
int print_last_digit(int n)
{
	int x = n % 10;

	_putchar(x + 48);
	return (x);
}
