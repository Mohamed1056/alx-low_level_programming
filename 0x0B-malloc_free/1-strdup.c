#include"main.h"
#include <stdlib.h>
#include <string.h>

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
	/*after declaration*/
	x = strlen(str);
	char *ptr;
	/*after declaration*/
	ptr = malloc(x * sizeof(char*));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= x; ++i)
		{
			*(ptr + i) = *(str + i);
		}
	}
	return (ptr);
	free(ptr);
}
