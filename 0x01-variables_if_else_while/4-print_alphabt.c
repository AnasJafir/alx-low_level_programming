#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase except e and q
 *
 * Return: 0 (Sucess)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
