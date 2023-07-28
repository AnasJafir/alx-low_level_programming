#include "lists.h"
/**
 * list_len - claculate the length of list
 * @h: pointer to the first node
 * Return: the length of list
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
