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
	int A = 15;

	while (A >= 0)
	{
		printf("%d", A);
		A--;
	}
	putchar('\n');
	return (0);
}
