#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: dog pointer to
 *
 * Return: pointer of dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->name == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
