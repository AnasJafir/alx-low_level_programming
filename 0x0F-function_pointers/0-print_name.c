#include "function_pointers.h"
/**
 * f - function prints a given name
 * @name: string input
 * Return: void
*/
void f(char *name)
{
	printf("Hello, my name is %s\n", name);
}
/**
 * print_name - prints a name
 * @name: string input
 * @f: pointer to function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
