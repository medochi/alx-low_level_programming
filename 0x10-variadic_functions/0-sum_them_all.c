#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum any numbers
 * @n : interger the number of numbers
 * Return: ALways 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list ar;
	
	unsigned int i ;

	va_start(ar, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}
	va_end(ar);

return (sum);
}
