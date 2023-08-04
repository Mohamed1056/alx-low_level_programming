#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing _putchar using putchar function
 *
 * Return: 0 (success)
*/

int main(void)
{
	char wor[] = "_putchar";
	int n;
	/*making a loop to print the word _putchar*/

	for (n = 0; n < 8; n++)
		putchar(wor[n]);
	putchar('\n');
	return (0);
}
