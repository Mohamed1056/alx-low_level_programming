#include "lists.h"

/**
 * sum_dlistint - function to add all
 * the data in the list
 * @head: takes the input of the function
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
