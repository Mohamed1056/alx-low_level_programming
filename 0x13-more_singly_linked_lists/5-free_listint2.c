#include"lists.h"

/**
 * free_listint2 - free all the list
 * @head: take the input for the function
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t changer = *head;
		*head = (*head)->next;
		free(changer);
	}
}
