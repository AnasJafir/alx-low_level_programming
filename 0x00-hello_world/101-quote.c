#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Print to the standard error with write function
 *
 * Return: 1 (Fail)
*/
int main(void)
{
char *A = "and that piece of art is useful\" - Dora Korpar, 2015 - 10 - 19\n";
write(1, A, 59);
return (1);
}
