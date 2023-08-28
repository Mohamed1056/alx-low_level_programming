#include"lists.h"

/**
 * get_nodeint_at_index - function to find the node
 * @head: 1st input
 * @index: 2nd input
 * Return: search
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *search;

	if (!head)
		return (NULL);
	search = head;
	while (i <= index)
	{
		if (search != NULL)
		{
			search = search->next;
		}
		i++;
	}
	return (search);
}
