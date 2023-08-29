#include "lists.h"

/**
 * find_listint_loop - function to find the loop
 * @head: takes the input for the function
 *
 * Return: fat, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *fat = head;
	/*after decleartion*/
	if (!head)
		return (NULL);
	/*while loop to run the code*/
	while (low && fat && fat->next)
	{
		fat = fat->next->next;
		low = low->next;
		if (fat == low)
		{
			low = head;
			while (low != fat)
			{
				low = low->next;
				fat = fat->next;
			}
			return (fat);
		}
	}

	return (NULL);
}
