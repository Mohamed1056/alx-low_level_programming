#include"main.h"
#include <stdlib.h>

/**
 * *_realloc - function to print symbols
 * @ptr: takes the input of the function
 * @old_size: takes the 1st number
 * @new_size: takes the 2nd number
 * Return: pttr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pttr;
	char *ptur;
	unsigned int i;
	/*after deckeration*/
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pttr = malloc(new_size);
	if (!pttr)
		return (NULL);
	ptur = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			pttr[i] = ptur[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			pttr[i] = ptur[i];
		}
	}
	free(ptr);
	return (pttr);
}
