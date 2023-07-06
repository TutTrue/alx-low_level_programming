#include "hash_tables.h"
/**
 * sorted_list: create the sorted linked list of the hash table
 * @ht: the hash table
 * @node: node to insert
 */
void sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (!ht->shead && !ht->stail)
	{
		ht->shead = ht->stail = node;
	    node->sprev = node->snext = NULL;
		return;
	}
	tmp = ht->shead;
	if (strcmp(node->key, ht->shead->key) < 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		node->sprev = NULL;
		return;
	}
	while (tmp)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			tmp->sprev->snext = node;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			return;
		}
		tmp = tmp->snext;
	}
	ht->stail->snext = node;
	node->sprev = ht->stail;
	ht->stail = node;
	ht->stail->snext = NULL;
}