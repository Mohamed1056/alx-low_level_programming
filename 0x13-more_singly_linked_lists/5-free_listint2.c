#include"lists.h"

/**
 * free_listint2 - free all the list
 * @head: take the input for the function
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *simp;
	/*after decleration*/
	if (!head)
		return;
	node = *head;
	while (node != NULL)
	{
		simp = node;
		node = node->next;
		free(simp);
	}
	*head = NULL;
}
