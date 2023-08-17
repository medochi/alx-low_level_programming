include "function_pointers.h"

/**
 * int_index - function that checks
 *
 * @size: size of array
 * @array: array rhat we itirate in
 * @cmp: function
 *
 *
 * Return: int
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)

	{
		int i;

		for (i = 0 ; i < size ; i++)

		{
			bool what;

			what = cmp(array[i]);
			if (bool)

			{
				return (i);
			}
		}

	}
}
