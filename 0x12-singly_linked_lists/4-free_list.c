#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *map;
	/*after decleration*/
	while (head)
	{
		map = head->next;
		free(head->str);
		free(head);
		head = map;
	}
}

