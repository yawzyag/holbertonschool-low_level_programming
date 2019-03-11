#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - show a table whit 9 multiplication
 *@s: string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i, length;

	for (i = 0, length = 0; *(s + i); i++)
		length++;

	return (length);
}

/**
 * _strdup - copy a string
 * @str: string
 *
 * Return: number acci code
 */
char *_strdup(char *str)
{
	int len, i;
	char *cpy;

	if (!str)
		return (NULL);

	for (i = 0, len = 0; *(str + i); i++)
		len++;

	cpy = malloc(len * sizeof(char) + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(cpy + i) = *(str + i);

	*(cpy + i) = '\0';

	return (cpy);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: woner of dog
 *
 * Return: new dog ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int length1, length3;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	length1 = _strlen(name);
	new->name = malloc((length1 + 1) * sizeof(char));
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->name = _strdup(name);

	new->age = age;

	length3 = _strlen(owner);
	new->owner = malloc((length3 + 1) * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new);
		return (NULL);
	}
	new->owner = _strdup(owner);

	return (new);
}
