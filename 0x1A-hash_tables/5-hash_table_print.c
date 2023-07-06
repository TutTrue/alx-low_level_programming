#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int flag = 0;
	hash_node_t *cur_node;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cur_node = ht->array[i];
			while (cur_node)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", cur_node->key, cur_node->value);
				flag = 1;
				cur_node = cur_node->next;
			}
		}
	}
	printf("}\n");
}
