#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _mset - copy char
 * @s: string
 * @c: input
 * @n: bytes
 * Return: string
 */

char *_mset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_mset(p, 0, (nmemb * size));
	return (p);
}
