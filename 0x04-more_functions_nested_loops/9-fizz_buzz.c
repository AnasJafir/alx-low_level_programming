#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by new line
 *        numbers that are multiples of 3 print Fizz
 *        numbers that are multiples of 5 print Buzz
 *        numbers that are multiples of 3 and 5 print FizzBuzz
 *        each number and word should be separated by a space
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
