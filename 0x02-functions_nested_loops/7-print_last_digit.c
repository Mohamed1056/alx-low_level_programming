#include"main.h"

/**
 * print_last_digit - function that computes
 * the last digit of a number
 *
 * @n: takes the value for the function
 *
 * Return: Alwayse 0 (success)
*/

int print_last_digit(int n)
{
	int x;
	/*getting the value of x*/
	if (n < 0)
		x = (-1) * (n % 10);
	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}

