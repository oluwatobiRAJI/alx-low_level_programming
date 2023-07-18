#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Define a new type struct dog.
 * @d: pointer to struct dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
