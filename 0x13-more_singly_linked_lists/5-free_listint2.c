#include"lists.h"

/**
 * free_listint2 - free all the list
 * @head: take the input for the function
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t *temp;

		while (head != NULL)
		{
			temp = head;
			head = head->next;
		}
		head->next = NULL;
	}
}
