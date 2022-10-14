#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"

/**
 * sum_them_all - to sum up all numbers
 *
 * @n: numbers of argument
 * Return: if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list kunle;
	int x;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(kunle, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(kunle, int);
		sum += x;
	}
	va_end(kunle);
	return (sum);
}
