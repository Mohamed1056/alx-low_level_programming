#include"main.h"

/**
 * _strstr - function to do what we want
 *
 * @haystack: takes the input for the function
 *
 * @needle: takes the other input of the function
 *
 * Return: 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	int m, x;
	char *p;
	/*do loops*/
	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (x = 0; needle[x] = '\0'; x++)
		{
			while (haystack[m] = needle[x])
			{
				p = &needle[x];
				return (p);
			}
		}
	}
	return (0);
}
