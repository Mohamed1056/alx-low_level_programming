#include"main.h"
#include <stdlib.h>

/**
 * *_strdup - function to double any string
 *
 * @str: takes the input of the function
 *
 * Return: ptr if true null if false
*/

char *_strdup(char *str)
{
	int i, x;
	char *ptr;
	/*after declartion*/
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	;
	ptr = malloc(x * sizeof(*str) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < x; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
	free(ptr);
}
