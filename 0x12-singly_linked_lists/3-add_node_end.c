#include "lists.h"

/**
 * add_node_end - function
 * @head: takes 1st input
 * @str: takes 2nd input
 * Return: win
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *win;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	win = malloc(sizeof(list_t));
	if (!win)
		return (NULL);

	win->str = strdup(str);
	win->len = len;
	win->next = NULL;

	if (*head == NULL)
	{
		*head = win;
		return (win);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = win;

	return (win);
}

