#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to function that compares values
 *
 * Return: index of matched element, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int value = -1;

	if (size > 0 && array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				value = i;
				break;
			}
		}
	}

	return (value);
}
