#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 */
void test_islower(int c)
{
	int r;

	r = _islower('n');
	_putchar(r + '0');
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	test_islower('H');
	return (0);
}
