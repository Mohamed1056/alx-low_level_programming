#include"main.h"

/**
 * print_square - function that prints a square
 *
 * @size: takes the input for the function
*/

void print_square(int size)
{
	int i, j;
	/*an if statment to run the code*/
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
