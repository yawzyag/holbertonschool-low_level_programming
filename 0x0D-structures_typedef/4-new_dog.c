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
 * _strcpy - show a table whit 9 multiplication
 *@dest: string dest
 *@src: string source
 *
 * Return: char of strings
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (i = 0, length = 0; *(dest + i) != '\0'; i++)
		length++;

	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
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
		return (0);

	length1 = _strlen(name);
	new->name = malloc((length1 + 1) * sizeof(char));
	_strcpy(new->name, name);

	new->age = age;

	length3 = _strlen(owner);
	new->owner = malloc((length3 + 1) * sizeof(char));;
	_strcpy(new->owner, owner);

	return (new);
}
