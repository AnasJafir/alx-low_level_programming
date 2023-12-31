#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print combinations of two two-digits numbers
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 99)
	{
		num2 = num1;
		while (num2 <= 99)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
			if (num1 + num2 != 197)
			{
				putchar(',');
				putchar(' ');
			}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
