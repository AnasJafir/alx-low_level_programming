#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: integer input
 * @argv: string input
 * Return: Always 0 ( Success)
*/
int main(int argc, char *argv[])
{
	printf("%d\n", _atoi(argv[argc - 1]) * _atoi(argv[argc - 2]));
	return (0);
}
/**
 * _atoi - convert a string to an integer
 * @s: string input
 * Return: returns the number in the string
 *         otherwise return (0)
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
