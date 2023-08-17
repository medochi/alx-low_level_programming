#include "function_pointers"

/**
 * array_iterator - a function that puts array into another function
 *
 * @array; a pointer to array
 * @size: size of the array
 * @action: function that take the values of the array
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	for (i = 0 ; i < size ; i++)
	{

		if (array && action)
		{
		action(array[i]);
		}
	}

}
