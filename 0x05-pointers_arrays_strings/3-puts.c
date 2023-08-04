#include"main.h"

/**
 * _puts - function that print a new line
 *
 * @str: takes the input of the function
 *
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
