#include "lists.h"
/**
 * add_node - adds node to the beginning of list
 * @head: address of pointer to the head node
 * @str: string field of node
 * Return: size of list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	if (!head || !newHead)
		return (NULL);
	if (str)
	{
		newHead->str = strdup(str);
		if (!newHead->str)
		{
			free(newHead);
			return (NULL);
		}
		newHead->len = strlen(newHead->str);
	}

	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
