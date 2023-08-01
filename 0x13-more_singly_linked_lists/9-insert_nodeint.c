#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to pointer to first element
 * @idx: given index
 * @n: data of node at the given index
 * Return: address of the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	free(new);
	return (NULL);
}
