#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - to allocates memory using malloc
 * @b: number of bytes or size memory to allocate
 *
 * Return: return address or pointer to allocated memory or termination if err
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
