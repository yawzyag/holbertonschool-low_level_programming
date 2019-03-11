#include "dog.h"
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
	struct dog *ptr = d;
	ptr -> name = name;
	ptr -> age = age;
	ptr -> owner = owner;
}
