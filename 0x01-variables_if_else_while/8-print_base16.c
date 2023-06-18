#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int A = 48;

	while (A <= 102)
	{
		putchar(A);
		if (A == 57)
			A += 39;
		A++;
	}
	putchar('\n');
	return (0);
}
