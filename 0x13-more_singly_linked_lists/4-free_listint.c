#include"lists.h"

/**
 * free_listint - function to free the lists
 * @head: take the input
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
