#include "main.h"
/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i = 0;
	char A[] = "_putchar";

	while (i <= 7)
	{
		_putchar(A[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
