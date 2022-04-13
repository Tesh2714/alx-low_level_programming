#include "function_pointers.h"

/**
 * int_index - find for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to compare values.
 *
 * Return: return 0 -1 index.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
