#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to a pointer to first element
 * @index: given index
 * Return: 1 (success), -1 (failure)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	i = 0;
	while (current != NULL)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
