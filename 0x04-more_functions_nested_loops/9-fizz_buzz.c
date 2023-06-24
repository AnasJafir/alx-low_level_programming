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
	int l;

	for (l = 0; l <= 100; l++)
	{
		if ((l % 3 == 0) && (l % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((l % 3 == 0) && !(l % 5))
		{
			printf("Fizz");
		}
		else if ((l % 5 == 0) && !(l % 3 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", l);
		}
		if (l != 100)
		{
			printf(" ");
		}
	}
	_putchar('\n');
	return (0);
}
