#include <stdio.h>

/**
 * main -entry point
 *
 * Desvription: printing alphas
 *
 * Return: 0(success)
*/

int main(void)
{
	char alpha = 'a';
	char zeta = 'A';

	/*print lower case */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/*print upper case*/
	while (zeta <= 'Z')
	{
		putchar(zeta);
		zeta++;
	}
	putchar('\n');

	return (0);
}
