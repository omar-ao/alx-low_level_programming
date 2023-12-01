#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 * Return: Pointer to a hash table if success or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
