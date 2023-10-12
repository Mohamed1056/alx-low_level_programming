#include "lists.h"

/**
 * free_dlistint - function to free the list
 * @head: takes the input for the function
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
