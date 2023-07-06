#include "hash_tables.h"
/**
 * shash_table_print - print the hash table
 * @ht: the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *cur_node;

	if (!ht)
		return;
	printf("{");
	cur_node = ht->shead;
	while (cur_node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", cur_node->key, cur_node->value);
		flag = 1;
		cur_node = cur_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in reversed order
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *cur_node;

	if (!ht)
		return;
	printf("{");
	cur_node = ht->stail;
	while (cur_node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", cur_node->key, cur_node->value);
		flag = 1;
		cur_node = cur_node->sprev;
	}
	printf("}\n");
}