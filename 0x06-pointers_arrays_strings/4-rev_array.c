#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int temp, last, i;

	last = n - 1;
	i = 0;

	while (i < last)
	{
		temp = *(a + i);
		*(a + i) = *(a + last);
		*(a + last) = temp;
		i++;
		last--;
	}
}

