#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: ...
 * @n: number
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%c", va_arg(ar, int), *separator);
	}
	va_end(ar);
}
