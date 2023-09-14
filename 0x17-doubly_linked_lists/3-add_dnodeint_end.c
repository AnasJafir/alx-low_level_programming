#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of the doubly linked list
 * @n: the value of the node to add
 * Return: the new pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = NULL;
	dlistint_t *current = *head;

	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node)
	{
		new_Node->n = n;
		new_Node->next = NULL;
		new_Node->prev = NULL;

		if (!(*head))
			*head = new_Node;
		else
		{
			while (current->next)
				current = current->next;
			current->next = new_Node;
			new_Node->prev = current;
		}
	}
	return (new_Node);
}
