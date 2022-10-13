#include<stdio.h>
#include"3-op_function.c"
#include"3-calc.h"

/**
 * get_op_func - to get the operator that correspond to a function
 * @s: argument
 * Return: A pointer to the function that correspoinds to the operator
 * given as a paramenter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
		
