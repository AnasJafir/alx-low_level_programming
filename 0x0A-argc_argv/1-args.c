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
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
