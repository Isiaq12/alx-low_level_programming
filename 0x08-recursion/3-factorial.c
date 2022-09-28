#include"main.h"

/**
 * factorial - prints the factorial of n
 *
 * @n: the number
 *
 * Return: factorial of an buffer if n is less
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
