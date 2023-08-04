#include <stdio.h>
#include "main.h"

/**
 * main - the function to do what we want
 *
 * @argc: takes the input of the function
 *
 * @argv: takes the other input
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
