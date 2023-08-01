#include "lists.h"
/**
 * sum_listint - returns the sum of all node's data
 * @head: pointer to the firt element
 * Return: sum of data
*/
int sum_listint(listint_t *head)
{
	int i = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
