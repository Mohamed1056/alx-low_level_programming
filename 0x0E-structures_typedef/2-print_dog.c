#include"dog.h"
#include <stdio.h>

/**
 * print_dog - function to print what we want
 * @d: takes the input
 * Return: void
*/

void print_dog(struct dog *d)
{
	char *Name, *Owner;
	float Age;
	/*after decleration*/
	if (d == NULL)
		printf("");
	Name = d->name;
	if (d->name == NULL)
		printf("Name: nil");
	else
		printf("Name: %s", Name);
	Age = d->age;
	if (d->age == NULL)
		printf("Age: nil");
	else
		printf("Age: %0.1f", Age);
	Owner = d->owner;
	if (d->owner == NULL)
		printf("Owner: nil");
	else
		printf("Owner: %s", Owner);
}
