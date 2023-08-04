#include"main.h"
#include <stdio.h>

/**
 * is_prime_number - function that check if the
 * number is prime or not
 *
 * @n: takes the input of the function
 *
 * @j: takes the other input
 *
 * Return: 0 (success)
*/

int check_for_prime(int n, int j);
int is_prime_number(int n)
{
	return (check_for_prime(n, 2));
}

/**
 * check_for_prime - function that check if the
 * number is prime or not
 *
 * @n: takes the input for the function
 *
 * @j: takes the other input for the function
 *
 * Return: 0 (success)
*/
int check_for_prime(int n, int j)
{
	if (j >= n && n > 1)
	{
		return (1);
	}
	else if (n % j == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_for_prime(n, j + 1));
	}
	return (0);
}
