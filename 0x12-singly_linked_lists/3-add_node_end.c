#include "lists.h"

/**
 * add_node_end - function
 * @head: takes 1st input
 * @str: takes 2nd input
 * Return: new_noode
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_noode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_noode)
		return (NULL);
	if (str)
	{
		new_noode->str = strdup(str);
		if (!new_noode->str)
		{
			free(new_noode);
			return (NULL);
		}
	}
		if (node)
		{
			while (node->next)
				node = node->next;
			node->next = new_noode;
		}
		else
			*head = new_noode;
		return (new_noode);
}
