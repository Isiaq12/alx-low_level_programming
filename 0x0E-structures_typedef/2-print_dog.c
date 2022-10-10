#include"dog.h"
#include<stdio.h>

/**
 * print_dog - to print out the the value stored in the variable
 * @d: the pointer
 *
 * Return: Success
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)");
		else
			printf("%s\n", d->name);
		printf("%f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)");
		else
			printf("%s\n", d->owner);
	}
}
