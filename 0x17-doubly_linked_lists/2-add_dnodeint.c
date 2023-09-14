#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the head of the doubly linked list
 * @n: the value of the node to add
 * Return: the new pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = NULL;

	new_Node = malloc(sizeof(dlistint_t));
	if (new_Node)
	{
		new_Node->n = n;
		new_Node->prev = NULL;
		if (*head)
			(*head)->prev = new_Node;
		new_Node->next = *head;
		*head = new_Node;
	}

	return (new_Node);
}
