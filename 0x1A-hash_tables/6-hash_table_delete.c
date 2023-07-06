#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	long unsigned int i;
	hash_node_t *cur, *temp;

	if (!ht)
		return;
	for (i = 0; i < (ht->size); i++)
	{
		if (ht->array[i] != NULL)
		{
			cur = ht->array[i];
			while (cur)
			{
				temp = cur->next;
				free(cur->key);
				free(cur->value);
				free(cur);
				cur = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
