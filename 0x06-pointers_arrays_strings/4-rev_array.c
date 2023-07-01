#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: array
 * @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
}
