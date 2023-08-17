#include "function_pointers.h"
/**
 * print_name - function that take a string to function
 *
 * @name : a string taken from user
 *
 * @f : function that do something to the string
 *
 *
 * Description - function that callback functions
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
