#include"lists.h"

/**
 * add_node - function to add new node
 * @head: takes the input
 * @str: takes the other input
 * Return: current
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int i = 0;

	while (str[i])
		i++;
	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = i;
	current->next = (*head);
	(*head) = current;
	return (*current);
}
