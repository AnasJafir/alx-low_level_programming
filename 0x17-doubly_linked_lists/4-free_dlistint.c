#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
