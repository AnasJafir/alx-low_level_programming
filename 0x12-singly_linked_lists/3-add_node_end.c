#include "lists.h"
/**
 * add_node_end - add a node at the end
 * @head: address of pointer to head node
 * @str: string field to node
 * Return: size of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (str)
	{
		if (!head || !newNode)
			return (NULL);
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(newNode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
