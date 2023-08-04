#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing all the alphha expet q and e
 *
 * Return: 0 (success)
*/

int main(void)
{
	char beta = 'a';
	/*printing alphapet*/
	while (beta <= 'z')
	{
		if (beta == 'q' || beta == 'e')
			beta++;
		putchar(beta);
		beta++;
	}
	putchar('\n');
	return (0);
}
