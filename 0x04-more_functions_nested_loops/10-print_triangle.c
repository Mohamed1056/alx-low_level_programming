#include"main.h"

/**
 * print_triangle - function to print triangle
 *
 * @size: takes the input for the function
*/

void print_triangle(int size)
{
	int h, b;
	/*an if statment to check the code*/
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
