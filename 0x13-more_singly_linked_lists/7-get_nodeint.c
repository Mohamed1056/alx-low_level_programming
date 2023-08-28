#include"lists.h"

/**
 * get_nodeint_at_index - function to find the node
 * @head: 1st input
 * @index: 2nd input
 * Return: search
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *search;

	for (search = head, i = 0; search && i < index; search = search->next, i++)
		;
	return (search);
}
