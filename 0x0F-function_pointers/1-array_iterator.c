#include "function_pointers.h"

/**
 * array_iterator - a function that puts array into another function
 *
 * @size: size of the array
 * @action: function that take the values of the array
 * @array: an array
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i;

	for (i = 0 ; i < size ; i++)
	{

		if (array && action)
		{
		action(array[i]);
		}
	}

}
