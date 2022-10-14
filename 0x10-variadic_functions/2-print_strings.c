#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_strings - to print out a string
 * @separator: anything
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list kunle;
	char *s;

	va_start(kunle, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(kunle, char*);
		if (s == NULL)
		{
			printf(("nil"));
		}
		else
		{
			printf("%s", s);
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(kunle);
}
