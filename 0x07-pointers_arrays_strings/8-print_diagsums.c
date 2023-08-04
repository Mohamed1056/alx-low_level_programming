#include"main.h"
#include <stdio.h>

/**
 * print_diagsums - function to sum diagonal
 *
 * @a: takes the input of the function
 *
 * @size: takes the other input of the function
*/

void print_diagsums(int *a, int size)
{
	int itr, sum1 = 0, sum2 = 0;
	/*doing loops*/
	for (itr = 0; itr < size; itr++)
	{
		sum1 += a[itr];
		sum2 += a[size - itr -1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
