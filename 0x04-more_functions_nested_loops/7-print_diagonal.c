#include"main.h"

/**
 * print_diagonal - function that prints a diagonal line
 *
 * @n: takes the input for the function
*/

void print_diagonal(int n)
{
	int postn, space;
	/*if statment to check the code*/
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);/*is equal to \ char*/
			_putchar('\n');
		}
	}
}
