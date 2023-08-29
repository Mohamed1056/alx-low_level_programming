#include"lists.h"

/**
 * sum_listint - funcion to sum all nums
 * @head: takes input for the function
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
