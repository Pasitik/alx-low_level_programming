#include "hash_tables.h"

/**
 * hash_table_create - create a hash table with a given size
 * @size: the size of the created hash table
 *
 * Description: this creates a hash table in memory with a
 * given size and then sets the size as well as allocate memory
 * for the array
 *
 * Return: hash_table *
 */
hash_table_t *hash_table_create(unsigned long int size){

	unsigned int i = 0;
	hash_table_t *hash_t = NULL;

	if (size <= 0)
		return NULL;

	hash_t = malloc(size * sizeof(hash_table_t));
	if (hash_t == NULL)
		return NULL;

	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t *));
	if(hash_t->array == NULL)
	{
		free(hash_t);
		return NULL;
	}

	for(i = 0; i < size; i++){
		hash_t->array[i] = NULL;
	}
	return hash_t;
}
