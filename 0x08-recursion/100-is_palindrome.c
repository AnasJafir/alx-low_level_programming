#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 *
 * Return: 1 if the string is a palindrome
 *         otherwise returns 0
*/

int length(char *s);
int is_palindrome_support(char *s, int f, int l);
int is_palindrome(char *s)
{
	int lgh = length(s);

	return (is_palindrome_support(s, 0, lgh - 1));
}

/**
 * is_palindrome_support - check if the characters of string matches
 * @s: string input
 * @f: input integer
 * @l: input integer
 * Return: 1 if the string is palindrome
 *         otherwise returns call of function
*/
int is_palindrome_support(char *s, int f, int l)
{
	if (f > l)
		return (1);
	else if (s[f] == s[l])
		return (is_palindrome_support(s, f + 1, l - 1));
	return (0);
}

/**
 * length - calculate the lenght of string
 * @s: input string
 * Return: 0 if *s is equal to '\0'
 *         otherwise retruns a call of function
*/
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}
