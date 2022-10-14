#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_numbers - to print out numbers
 *
 * @separator: puntuation or anything, string to be precise
 * @n: number of string
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list kunle;
	int x;

	va_start(kunle, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(kunle, int);
		printf("%d", x);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(kunle);
}
