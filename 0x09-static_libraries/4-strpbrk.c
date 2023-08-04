#include"main.h"

/**
 * _strpbrk - function to print what we want
 *
 * @s: takes the input for the function
 *
 * @accept: takes the other input for the function
 *
 * Return: 0 (success)
*/

char *_strpbrk(char *s, char *accept)
{
	int m, x;
	char *p;
	/*giving value to m*/
	m = 0;
	/*doing while loop*/
	while (s[m] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (accept[x] == s[m])
			{
				p = &s[m];
				return (p);
			}
			x++;
		}
		m++;
	}
	return (0);
}
