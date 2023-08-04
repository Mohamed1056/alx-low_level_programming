#include"main.h"

/**
 * _strchr - function to print the code
 *
 * @s: takes the input for the function
 *
 * @c: takes the input for the function
 *
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int x;
	/*for loop to print the code*/
	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
