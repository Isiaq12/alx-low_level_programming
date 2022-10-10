#include"dog.h"
#include<stdio.h>

/**
 * init_dog - the name of the function
 * @d: variable name
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: Success
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
