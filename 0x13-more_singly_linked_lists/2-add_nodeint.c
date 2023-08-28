#include"lists.h"

/**
 * add_nodeint - add at beginning
 * @head: takes the input for the function
 * @n: takes the input for the function
 * Return: tmp
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->n = n;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
