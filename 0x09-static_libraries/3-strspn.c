#include"main.h"

/**
 * _strspn - function that print the value we want
 *
 * @s: takes the input for the function
 *
 * @accept: takes the input for the function
 *
 * Return: m
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, x;
	/*for loop to print the code*/
	for (m = 0; s[m] != '\0'; m++)
	{
		for (x = 0; accept[x] != s[m]; x++)
		{
			if (accept[x] == '\0')
				return (m);
		}
	}
	return (m);
}
