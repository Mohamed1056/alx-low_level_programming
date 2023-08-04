#include"main.h"

/**
 * print_array - function to print the element
 *
 * @a: takes the input of the function
 *
 * @n: takes the input of the function
*/

void print_array(int *a, int n)
{
	int i;
	/*for loop to print*/
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
