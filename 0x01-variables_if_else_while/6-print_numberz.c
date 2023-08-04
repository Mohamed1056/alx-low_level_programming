#include <stdio.h>

/**
 * main -entry point
 *
 * Descriotion: printing nums
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num;
	/*printing nums*/
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
