#include "lists.h"

/**
 * get_dnodeint_at_index - function to get
 * the node at a certain index
 * @head: the first node in the list
 * @index: the index to stop at
 * Return: the node at that index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h;

	i = 0;
	if (head == NULL)
		return (NULL);
	h = head;
	while (h != NULL)
	{
		if (index == i)
			return (h);
		i++;
		h = h->next;
	}
	return (NULL);
}
