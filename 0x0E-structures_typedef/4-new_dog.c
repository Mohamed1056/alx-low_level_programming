#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function to calculate the length
 * @str: takes the input of the function
 * Return: i
*/

int _strlen(char *str)
{
	int i = 0;
	/*after decleration*/
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - function to copy the string
 * @dest: takes the 1st input for the function
 * @src: takes the 2nd input for the function
 * Return: dest
*/

char _strcpy(char *dest, char *src)
{
	int i = 0;
	/*after decleration*/
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function to print what we want
 * @name: takes the name
 * @age: takes the age
 * @owner: takes the owner
 * Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/*after decleration*/
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
