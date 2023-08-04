#include"main.h"

/**
 * print_rev - function that reverse the string
 *
 * @s: takes the input for the function
*/

void print_rev(char *s)
{
	int m = 0;
	/*for lop for reversing the string*/
	while (s[m])
		m++;
	while (m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
