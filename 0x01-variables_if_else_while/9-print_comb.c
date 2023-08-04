#include <stdio.h>

/**
 * main -entry point
 *
 * Description: printing numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;
	/*printing nums*/

	while (num <= 9)
	{
		putchar(num + 48);
		if (num < 9)
			putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
