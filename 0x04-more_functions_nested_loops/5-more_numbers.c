#include"main.h"

/**
 * more_numbers - function that prints the numbers
 * from 0 to 14 for 10 times
*/

void more_numbers(void)
{
	int n, i, num;
	/* a for loop to print the numbers from 0 to 14 10 times*/
	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			num = n;
			if (n > 9)
			{
				_putchar(1 + 48);
				num = n % 10;
			}
				_putchar(num + 48);
		}
		_putchar('\n');
	}
}
