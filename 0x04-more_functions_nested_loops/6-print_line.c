#include"main.h"

/**
 * print_line - function to draw a line
 *
 * @n: takes the input for the function
 *
 * Return: 0 (success)
*/

void print_line(int n)
{
	int i;
	/* making an if statment to check the code*/
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
	}
}
