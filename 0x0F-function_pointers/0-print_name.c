#include<stdio.h>
#include"main.h"

/**
 * print_name - to print out a name
 * @name: variable of the name to be printed
 * @f: pointer to a function
 *
 * Return: Always Succcess.
 * It's a void so we are not returning anything
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
	return (0);
}
