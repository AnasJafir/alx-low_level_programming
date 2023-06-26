#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 *
 * @a: first integer
 * @b: second integer
*/
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
