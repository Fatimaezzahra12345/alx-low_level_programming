#include "dog.h"

/**
 * init_dog - function
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: parameter
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
