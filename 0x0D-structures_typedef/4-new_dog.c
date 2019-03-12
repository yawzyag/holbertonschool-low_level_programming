#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (0);

	new->name = _strdup(name);
	if (new->name == NULL)
		free(new);

	new->age = age;

	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		if (new->name != 0)
		free(new->name);
		free(new);
	}

	return (new);
}
