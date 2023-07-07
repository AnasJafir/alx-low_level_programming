#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argc : integer input
 * @argv : string input
 * Return: 0 if no number is passed to program
 *         Error if the number contains other symbols
*/
int main(int argc, char *argv[])
{
	int i;
	unsigned int j;
	int sum = 0;
	char *k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k =  argv[i];
			for (j = 0; j < strlen(k); j++)
			{
				if (k[j] < 48 || k[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += _atoi(k);
			k++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
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
