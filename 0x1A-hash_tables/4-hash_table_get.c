#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: Hashtable
 * @key: Key
 * Return: The value associated with the element, or
 * NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	current = ht->array[idx];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	if (current == NULL)
		return (NULL);
	return (current->value);
}
