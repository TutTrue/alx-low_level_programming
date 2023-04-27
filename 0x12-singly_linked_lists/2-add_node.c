#include "lists.h"

/**
 * add_node - add new node at the begining of the list
 * @head: pointer to the head of linked list
 * @str: str that will be stored in the node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	if (!head)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
