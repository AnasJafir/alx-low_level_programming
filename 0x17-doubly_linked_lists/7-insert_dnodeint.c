#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the head pointer to the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the head of the doubly linked list
 * @idx: the index to add the node
 * @n: the value of the node
 * Return: the new pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int length = dlistint_len(*h);
	dlistint_t *new_Node = NULL, *tmp = *h;

	if (h)
	{
		if (idx > length)
			return (NULL);
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == length)
			return (add_dnodeint_end(h, n));

		new_Node = malloc(sizeof(dlistint_t));
		new_Node->n = n;
		if (new_Node)
		{
			while (idx--)
			{
				tmp = tmp->next;
			}
			new_Node->prev = tmp->prev;
			new_Node->next = tmp;
			tmp->prev->next = new_Node;
			tmp->prev = new_Node;
		}
	}
	return (new_Node);
}
