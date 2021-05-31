#include "hash_tables.h"
/**
 * *hash_table_create -  function that creates a hash table.
 *@size:  the size of the array
 *Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)	
		return (NULL);
	hash->array = malloc(size * sizeof(hash_node_t));
	if (hash->array == NULL)
	{
		return (NULL);
	}
	hash->size = size;
	return (hash);
}
