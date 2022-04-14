#include <stdio.h>

/**
 * array_iterator - executes a function for each array element
 *
 * @array: array to iterate
 * @size: size of the array
 * @action: function to execute in iteration
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
