#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing numbers and fizz and buzz
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num;
	/* a for loop to print the nums*/
	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz ");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
