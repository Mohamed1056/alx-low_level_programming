#include"lists.h"

/**
 * pop_listint - function to delete the head
 * @head: take the input for te function
 * Return: m
*/

int pop_listint(listint_t **head)
{
	int m;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	tmp = *head;
	m = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (m);
}
