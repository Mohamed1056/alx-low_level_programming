#include <stdio.h>

/**
 * _strlen - function that print the length
 * of a string
 *
 * @s: takes the input for the function
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int m;
	/*printing the length*/
	for (m = 0; *s != '\0'; s++)
		m++;
	return (m);
}
