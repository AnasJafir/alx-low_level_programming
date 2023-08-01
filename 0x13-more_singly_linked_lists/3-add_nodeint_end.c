#include "lists.h"
/**
 * add_nodeint_end - adds an element at the end
 * @head: pointer to pointer to an element
 * @n: value of element
 * Return: address to the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last_elm;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last_elm = *head;
		while (last_elm->next != NULL)
		{
			last_elm = last_elm->next;
		}
		last_elm->next = new;
	}
	return (new);
	free(new);
}
