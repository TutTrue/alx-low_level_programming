#include "hash_tables.h"
/**
 * create_node - create a new node
 * @key: key of the new node
 * @value: value of the new node
 * Return: new node or NULL
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}