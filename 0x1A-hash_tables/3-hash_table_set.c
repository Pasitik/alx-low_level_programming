#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_cpy = NULL;
	unsigned int index = 0;
	char *_key = NULL;


	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	_key = strdup(key);

	if(value)
	{
		value_cpy = strdup(value);
		if (value_cpy == NULL)
        {
            free(_key);
            return 0;
        }
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		hash_node_t *temp = NULL;
		temp = malloc (sizeof(hash_node_t));
		if(temp == NULL)
		{
			free(_key);
			free(value_cpy);
			return (0);
		}
		temp->key = _key;
		temp->value = value_cpy;
		temp->next = ht->array[index];
		ht->array[index] = temp;
		return (1);

	}
	else
	{
		ht->array[index] = malloc(sizeof(hash_node_t *));
		if(ht->array[index] == NULL)
		{
			free(_key);
			free(value_cpy);
			return (0);
		}
		ht->array[index]->key = _key;
		ht->array[index]->value = value_cpy;
		ht->array[index]->next = NULL;
		return (1);
	}
}
