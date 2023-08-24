#include "lists.h"

/**
 * add_node_end - function
 * @head: takes 1st input
 * @str: takes 2nd input
 * Return: nexw
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nexw;
	list_t *tump = *head;
	unsigned int len = 0;
	/*after decleration*/
	while (str[len])
		len++;

	nexw = malloc(sizeof(list_t));
	if (!nexw)
		return (NULL);

	nexw->str = strdup(str);
	nexw->len = len;
	nexw->next = NULL;
	/*if statment to check the code*/
	if (*head == NULL)
	{
		*head = nexw;
		return (nexw);
	}
	while (tump->next)
		tump = tump->next;

	tump->next = nexw;
	return (nexw);
}

