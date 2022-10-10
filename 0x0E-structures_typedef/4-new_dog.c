#include<stdio.h>
#include"dog.h"
#include<stdlib.h>

/**
 * new_dog - function name
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kunle;
	int namelen = 1;
	int ownerlen = 1;
	int i = 0;

	kunle = malloc(sizeof(dog_t));
	if (kunle == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
		namelen++;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		ownerlen++;
	}
	kunle->name = malloc(namelen * sizeof(char));
	if (kunle->name == NULL)
	{
		free(kunle);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		kunle->name[i] = name[i];
	}
	kunle->owner = malloc(ownerlen * sizeof(char));
	if (kunle->owner == NULL)
	{
		free(kunle);
		free(kunle->name);
	}
	for (i = 0; i < ownerlen; i++)
	{
		kunle->owner[i] = owner[i];
	}
	kunle->age = age;
	return (kunle);
}
