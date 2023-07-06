#include "main.h"
/**
 * is_prime_number - check for a given number is prime
 * @n: input integer
 * @d: divisor input integer
 * Return: returns 1 if n is a prime number
*/
int prime(int n, int d);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
/**
 * prime - check for a prime number
 * @n: input integer
 * @d: divisor input integer
 * Return: returns 1 if n is a prime number
*/
int prime(int n, int d)
{
	if (d == 1 || d == n)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime(n, d + 1));
}
