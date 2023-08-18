#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;
	unsigned int m = 0;
	va_list ar;

	va_start(ar, n);

	for(j = 0; j < n; j++)
	{
		while (va_arg(ar, char*) == NULL)
		{
			m++;
			if(m == (n-1))
			{
				exit(0);
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (va_arg(ar, char*) == NULL)
		{
			printf("(nil)");
			printf("%s",separator);
			continue;
		
		if (n != 0)
		{
		printf("%s",va_arg(ar, char*));
		}
		if ((n-i) != 1)
		{
			printf("%s",separator);
		}

	}
	va_end(ar);

	}
}
