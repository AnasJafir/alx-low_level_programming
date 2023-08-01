#include "lists.h"
/**
 * free_listint2 - free a list and set head to NULL
 * @head: pointer to pointer to and element
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *current_element;
	listint_t *next_element;

	if (head == NULL)
		return;
	current_element = *head;
	while (current_element != NULL)
	{
		next_element = current_element->next;
		free(current_element);
		current_element = next_element;
	}
	*head = NULL;
}
