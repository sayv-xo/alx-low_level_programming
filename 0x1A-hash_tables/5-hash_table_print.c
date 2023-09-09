#include "hash_tables.h"

/**
 * hash_table_print - Print th hash table
 * @ht: Pointer to the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int i, count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (count == 1)
				printf(", ");
			new = ht->array[i];
			while (new)
			{
				printf("'%s': '%s'", new->key, new->value);
				new = new->next;
				if (new)
					printf(", ");
			}
			count = 1;
		}
	}
	printf("}\n");
}
