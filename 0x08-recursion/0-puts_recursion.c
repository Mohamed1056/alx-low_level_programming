#include"main.h"

/**
 * _puts_recursion - function to put a new line
 *
 * @s: takes the input of the function
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
