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

	if (head == NULL)
		return;
	m = (*head->n);
	tmp = *head;
	free(tmp);
	return (m);
}
