#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_struct - format_type class
 * @format: format identifier
 * @fmt_print_func: pointer to function
 */

typedef struct format_struct
{
	char format;
	void (*fmt_print_func)(va_list *arg_list);
} format_struct_ptr;

#endif /*VARIADIC_FUNCTION_H*/
