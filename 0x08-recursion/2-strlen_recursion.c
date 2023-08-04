#include"main.h"

/**
 * _strlen_recursion - function that do what we want
 *
 * @s: takes the input from the function
 *
 * Return: i
*/

int _strlen_recursion(char *s)
{
	int i;
	/*recursion*/
	i = 0;
	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
