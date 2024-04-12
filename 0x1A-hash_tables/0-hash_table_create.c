#include "custom_hash_tables.h"

/**
 * custom_hash_table_create - Initialize a new custom hash table.
 * @size: Desired size of the hash table.
 *
 * Returns: Pointer to the newly created hash table.
 */
custom_hash_table_t *custom_hash_table_create(unsigned long int size)
{
	custom_hash_table_t *htable;
	unsigned long int index;

	/* Allocate memory for the hash table */
	htable = malloc(sizeof(custom_hash_table_t));
	if (htable == NULL)
		return NULL;

	/* Initialize hash table properties */
	htable->size = size;
	htable->buckets = malloc(sizeof(custom_hash_node_t *) * size);
	if (htable->buckets == NULL)
	{
		free(htable);
		return NULL;
	}

	/* Initialize each bucket to NULL */
	for (index = 0; index < size; index++)
		htable->buckets[index] = NULL;

	return htable;
}
