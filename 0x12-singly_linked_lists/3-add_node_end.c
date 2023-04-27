#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: pointer to the head node
 * @str: string stored in new node
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = *head, *newNode = malloc(sizeof(list_t));

	if (!str || !newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (p->next != NULL)
		p = p->next;

	p->next = newNode;
	newNode->next = NULL;
	return (newNode);
}
