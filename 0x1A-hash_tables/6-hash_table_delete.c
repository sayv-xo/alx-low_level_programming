#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: Pointer to hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			tmp = new;
			new = new->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
