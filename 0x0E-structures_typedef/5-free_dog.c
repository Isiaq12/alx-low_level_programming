#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - function name
 * @d: pointer name
 *
 * Return: Success
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
