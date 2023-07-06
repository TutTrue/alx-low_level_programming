#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key of the node
 * @value: value of the node
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *cur_node;
	int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = create_node(key, value);
		if (!node)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else
	{
		cur_node = ht->array[index];
		while (cur_node)
		{
			if (strcmp(cur_node->key, key) == 0)
			{
				free(cur_node->value);
				cur_node->value = strdup(value);
				return (1);
			}
			cur_node = cur_node->next;
		}
		/*cur_node = ht->array[index];*/
		node = create_node(key, value);
		if (!node)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}

}
/**
 * create_node - create a new node
 * @key: key of the new node
 * @value: value of the new node
 * Return: new node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
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
