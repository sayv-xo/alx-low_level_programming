#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with key in hash table
 * @ht: Pointer to hash table
 * @key: Key
 * Return: NULL if key cannot be matched, otherwise the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new = ht->array[index];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}

	return (NULL);
}
