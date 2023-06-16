#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print to the standard error with fprintf function
 *
 * Return: 1 (Fail)
*/
int main(void)
{
char *A = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19";
fprintf(stderr, "%s\n", A);
return (1);
}
