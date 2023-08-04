#include <stdio.h>
#include "main.h"

/**
 * main - function to do what we want
 *
 * @argc: takes the input
 *
 * @argv: takes the other input
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;
	/*if statment*/
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
