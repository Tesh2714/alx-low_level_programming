#include <stddef.h>
#ifndef FUN_POINTER
#include "function_pointers.h"
#endif

/**
 * array_iterator - iterature function on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
