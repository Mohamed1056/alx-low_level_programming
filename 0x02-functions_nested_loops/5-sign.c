#include"main.h"

/**
 * print_sign - check the value of a number
 * and print output
 *
 * @n: takes integer type input for function
 *
 * Return: 1 if +, -1 if -, 0 if it's equal to zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
