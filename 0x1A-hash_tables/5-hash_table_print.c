#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in reverse order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i, count = 0;
    hash_node_t *node;

    if (ht == NULL)
        return;

    printf("{");
    for (i = ht->size - 1; i < ht->size; i--)
    {
        if (i < 0)
            break;

        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                if (count > 0)
                    printf("; ");
                printf("'%s' => '%s'", node->key, node->value);
                node = node->next;
                count++;
            }
        }
    }
    printf("}\n");
}
