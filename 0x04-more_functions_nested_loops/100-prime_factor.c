#include <stdio.h>

/**
 * _sqrt - function to print square
 *
 * @x: takes the input for the function
 *
 * Return: sqrt
*/

double _sqrt(double x)
{
	float sqrt, tmp;
	/*after decleration*/
	sqrt = x / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - function to retun the largest
 * prime number
 *
 * @num: takes the input for the function
*/

void largest_prime_factor(long int num)
{
	int prmnum, largest;
	/*first divide with the smallest number two*/
	while (num % 2 == 0)
		num = num / 2;

	/*num must be odd so we proceed to the next prime number*/
	for (prmnum = 3; prmnum <= _sqrt(num); prmnum += 2)
	{
		while (num % prmnum == 0)
		{
			num = num / prmnum;
			largest = prmnum;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", laregest);
}

/**
 * main - entry point
 *
 * Description: printing the max prime number
 *
 * Return: Alwayse (0)
*/
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
