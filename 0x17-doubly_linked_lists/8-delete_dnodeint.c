#include "lists.h"
/**
 * delete_dnodeint_at_index - removes the given node
 * @head: the head of the linked list
 * @index: the index
 * Return: -1 on error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *tmp;
	dlistint_t *to_delete = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			while (a != index && to_delete)
			{
				tmp = to_delete;
				to_delete = tmp->next;
				a++;
			}
			if (a == index && to_delete)
			{
				tmp->next = to_delete->next;
				if (to_delete->next)
					to_delete->next->prev = tmp;
				free(to_delete);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}
