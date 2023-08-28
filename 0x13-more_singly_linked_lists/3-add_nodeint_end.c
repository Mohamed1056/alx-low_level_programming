#include"lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: takes the input for the function
 * @n: take the 2nd input
 * Return: temp
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
