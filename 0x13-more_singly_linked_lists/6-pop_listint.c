#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer to an element
 * Return: head node's data
*/
int pop_listint(listint_t **head)
{
	int i = (*head)->n;
	listint_t *node = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(node);
	return (i);
}
