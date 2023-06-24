#include "main.h"
#include <stdio.h>

/**
 * main - prints a fizz buss program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((a % 3 == 0))
		{
			printf("Fizz");
		}
		else if ((a % 5 == 0))
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	_putchar('\n');
	return (0);
}
