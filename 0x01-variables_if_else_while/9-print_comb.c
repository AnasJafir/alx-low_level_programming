#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int A = 0;

	while (A <= 9)
	{
		putchar(A + 48);
		A++;
		if (A != 9)
			putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
