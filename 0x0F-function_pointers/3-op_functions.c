#include"3-calc.h"
#include <stdio.h>

/**
 * op_add - function to add
 * @a: 1st input
 * @b: 2nd input
 * Return: a+b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subistaract
 * @a: 1st input
 * @b: 2nd input
 * Retun: a-b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiplicate
 * @a: 1st input
 * @b: 2nd input
 * Return: a*b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide
 * @a: 1st input
 * @b: 2nd input
 * Return: a/b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to calc module
 * @a: 1st input
 * @b: 2nd input
 * Return: a%b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
