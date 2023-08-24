#include"lists.h"

/**
 * add_node - function to add new node
 * @head: takes the input
 * @str: takes the other input
 * Return: current
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *current = malloc(sizeof(list_t));

	if (!current || !head)
		return (NULL);
	if (str)
	{
		current->str = strdup(str);
		if (!current->str)
		{
			free(current);
			return (NULL);
		}
		current->len = _strlen(current->str);
	}
	current->next = *head;
	*head = current;
	return (current);
}
