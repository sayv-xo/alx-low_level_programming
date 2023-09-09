#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash tale to insert to
 * @key: The key
 * @value: Value associated with the key
 * Return: 1 if successful, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index;


	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = value_copy;
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
