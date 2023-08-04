#include"main.h"

/**
 * _strcmp - function that checks two string
 *
 * @s1: takes the first input for the function
 *
 * @s2: takes the second input for the funcion
 *
 * Return: equal
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;
	/*doing loops to run the program*/
	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}

