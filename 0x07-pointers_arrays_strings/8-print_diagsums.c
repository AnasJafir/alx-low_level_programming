#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals
 * @a: 2d array
 * @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		s2 = s2 + a[i - size - 1];
		a = a + size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
