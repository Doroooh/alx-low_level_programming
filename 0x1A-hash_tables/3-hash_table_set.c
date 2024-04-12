#include "hash_tables.h"

/**
 * create_hash_node - Create a new hash node with the given key and value.
 * @key: The key for the new node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created hash node.
 */
custom_hash_node_t *create_hash_node(const char *key, const char *value)
{
    custom_hash_node_t *node = malloc(sizeof(custom_hash_node_t));
    if (node == NULL)
        return NULL;

    node->key = strdup(key);
    node->value = strdup(value);

    if (node->key == NULL || node->value == NULL) {
        free(node->key);
        free(node);
        return NULL;
    }

    node->next = NULL;
    return node;
}

/**
 * hash_table_set - Add or update an element in the custom hash table.
 * @ht: A pointer to the custom hash table.
 * @key: The key of the element to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(custom_hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || value == NULL)
        return 0;

    unsigned long int index = hash_function(key, ht->size);
    custom_hash_node_t *current = ht->buckets[index];
    custom_hash_node_t *prev = NULL;

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            // Key already exists, update the value
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return 0;
            return 1;
        }
        prev = current;
        current = current->next;
    }

    // Key does not exist, create a new node
    custom_hash_node_t *new_node = create_hash_node(key, value);
    if (new_node == NULL)
        return 0;

    if (prev != NULL)
        prev->next = new_node;
    else
        ht->buckets[index] = new_node;

    return 1;
}
