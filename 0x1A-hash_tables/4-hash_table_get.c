#include "hash_tables.h"

/**
 * hash_table_get - get value based on key
 * @ht: hash_table_t pointer
 * @key: string
 *
 * Description: using the key an index is gotten to find
 * hash_node_t with the same key
 *
 * Return: char *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if(ht->array[index] != NULL && key !=NULL && strncmp(ht->array[index]->key, key, ht->size) == 0)
	{
		return ht->array[index]->value;
	}
	else
	{
		return NULL;
	}
}
