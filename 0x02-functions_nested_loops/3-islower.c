#include "main.h"
/**
 *_islower - function to check if a character is lowercase
 *
 * @c: the character to be checked
 *
 * Return : 1 if 'c' is lowercase
 *          0 if 'c' is not lowercase
*/
int _islower(int c)
{
	int x;

	x = _islower('J');
	_putchar(x + 48);
	x = _islower('c');
	_putchar(x + 48);
	x = _islower('K');
	_putchar(x + 48);
	return (0);
}
