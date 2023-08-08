#include"main.h"
#include <stdlib.h>

/**
 * *str_concat - function to merge two words together
 *
 * @s1: takes the 1st input for the function
 *
 * @s2: takes the 2nd input for the function
 *
 * Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	int i, x, v;
	char *ptr;
	/*after decleration*/
	v = 0;
	if (s1 == NULL && s2 == NULL)
		return (" ");
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (x = 0; s2[x] != '\0'; x++)
	;
	ptr = malloc((i * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[v] = s1[i];
		v++;
	}
	for (x = 0; s2[x] != '\0'; x++)
	{
		ptr[v] = s2[x];
		v++;
	}
	return (ptr);
	free(ptr);
}
