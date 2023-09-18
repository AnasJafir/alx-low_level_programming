#include <stdio.h>
/**
 * add - add two integers
 * sub - find the difference between two integers
 * mul - multiply two integers
 * div - divides two integers
 * mod - find the remainder of division of two integers
 * @a: integer input
 * @b: integer input
 * Return: the result of the operation
*/
int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a / b);
}
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a % b);
}
