#include "lists.h"
/**
 * free_listint2 - free a list and set head to NULL
 * @head: pointer to pointer to and element
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *element;

	while (*head != NULL)
	{
		element = *head;
		*head = (*head)->next;
		free(element);
	}
}
