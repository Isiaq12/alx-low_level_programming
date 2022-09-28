#include"main.h"

/**
 * _pow_recursion - multiply x, y times
 *
 * @x: the value to be multiplied
 * @y: the numbver of times to multiply
 *
 * Return: value of x raised to the power of y
 */
int _pow_recusion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
