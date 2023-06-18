#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 *
 * Return: 0 (Sucess)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	putchar('\n');
	ch++;
	}
	return (0);
}
