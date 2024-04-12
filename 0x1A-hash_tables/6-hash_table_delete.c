#include "hash_tables.h"

/**
 * delete_node - deletes a hash node recursively.
 * @node: the node to delete.
 */
void delete_node(hash_node_t *node)
{
    if (node == NULL)
        return;

    delete_node(node->next);
    free(node->key);
    free(node->value);
    free(node);
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            delete_node(ht->array[i]);
            ht->array[i] = NULL;
        }
    }

    free(ht->array);
    free(ht);
}
