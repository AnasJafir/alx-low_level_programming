#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print digits of base 10
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int A = 0;

	while (A < 10)
	{
		putchar(A + 48);
		A++;
	}
	putchar('\n');
	return (0);
}
