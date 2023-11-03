#include "hash_tables.h"

/**
 * shash_table_create - function to create
 * sorted hash table
 * @size: takes the size of the sorted table
 * Return: ht
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}

/**
 * shash_table_set - function to set the ordered haash table
 * @ht: thae base of the sorted hash table
 * @key: the key that points to the value
 * @value: the value that will be put in the sorted table
 * Return: 0 or 1
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *new_node = NULL;
	shash_node_t *current = NULL;

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				return (1);
			}
			current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (insert_into_sorted_list(ht, new_node) == 0)
		return (0);

	return (1);
}

/**
 * shash_table_get - function to get the value of the key
 * @ht: the base of the sorted table
 * @key: takes the input of the function
 * Return: the value inside the node
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL)
		return (NULL);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - function to print the sorted
 * hash table
 * @ht: takes the base of the table
 * Return: Nothing
*/

void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (first)
		{
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
		}
		else
		{
			printf(", '%s': '%s'", node->key, node->value);
		}
		node = node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - function to print the sorted
 * hash table reversed
 * @ht: it's the base of the sorted table
 * Return: Nothing
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (first)
		{
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
		}
		else
		{
			printf(", '%s': '%s'", node->key, node->value);
		}
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - function to delete the sorted
 * table
 * @ht: takes the base of the sorted table
 * Return: Nothing
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);

	node = ht->shead;
	while (node != NULL)
	{
		next = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = next;
	}

	free(ht);
}

/***/
int insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current = ht->shead;
	shash_node_t *prev = NULL;

	if (ht == NULL || new_node == NULL)
		return (0);

	while (current != NULL && strcmp(new_node->key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}

	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		new_node->snext = current;
		prev->snext = new_node;
	}

	if (new_node->snext == NULL)
		ht->stail = new_node;

	return (1);
}
