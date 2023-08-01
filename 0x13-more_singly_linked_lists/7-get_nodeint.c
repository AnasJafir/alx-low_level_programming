#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to an element
 * @index: index of node starting from 0
 * Return: the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i += 1;
	}
	return (NULL);
}
