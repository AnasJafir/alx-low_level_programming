#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: number of vectors
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func_ptr = get_op_func(argv[2]);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func_ptr(num1, num2));
	return (0);
}
