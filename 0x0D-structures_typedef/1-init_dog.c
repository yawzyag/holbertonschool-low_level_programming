#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Makes the sum of two numbers
 * @d: dog pointer to
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
