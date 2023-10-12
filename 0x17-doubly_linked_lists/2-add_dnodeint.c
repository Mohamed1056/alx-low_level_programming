#include "lists.h"

/**
 * add_dnodeint - function to add node at
 * the begining
 * @head: takes the first node
 * @n: takes the value of the node
 * Return: the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
