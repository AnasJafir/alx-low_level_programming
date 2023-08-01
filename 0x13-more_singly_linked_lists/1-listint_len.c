#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: pointer to an element
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int total = 0;

	while (h != NULL)
	{
		h = h->next;
		total += 1;
	}
	return (total);
}
