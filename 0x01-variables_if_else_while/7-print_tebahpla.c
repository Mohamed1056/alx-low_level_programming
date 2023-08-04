#include <stdio.h>

/**
 * main -entry point
 *
 * Description: printing the alphaapets
 *
 * Return: 0 (success)
*/

int main(void)
{
	char manut = 'z';
	/* printing the alphapets*/
	while (manut >= 'a')
	{
		putchar(manut);
		manut--;
	}
	putchar('\n');
	return (0);
}
