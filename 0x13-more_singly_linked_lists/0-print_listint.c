#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: pointer to an element
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	int total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total += 1;
	}
	return (total);
}
