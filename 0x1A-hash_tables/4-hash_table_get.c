#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @key: key to retrieve the value associated with
 * Return: the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur_node;
	int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	cur_node = ht->array[index];
	while (cur_node)
	{
		if (strcmp(cur_node->key, key) == 0)
			return (cur_node->value);
		cur_node = cur_node->next;
	}
	return (NULL);
}
