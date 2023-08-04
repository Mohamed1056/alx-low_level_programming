#include"main.h"

/**
 * rev_string - function that reverse string
 *
 * @s: takes the input for the function
*/

void rev_string(char *s)
{
	int i, l;
	char tmp;
	/*revrsing words*/
	for (l = 0; s[l] != '\0'; l++)
		;
	/*another for loop*/
	for (i = 0; i < l; i++)
	{
		tmp = s[i];
		s[i] = s[l - i];/*-1 makes the array start from 0*/
		s[l - i] = tmp;
	}
	_putchar('\n');
}
