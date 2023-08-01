#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to an element
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *element;

	while (head != NULL)
	{
		element = head;
		head = head->next;
		free(element);
	}
}
