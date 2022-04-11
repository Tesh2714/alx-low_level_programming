#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy n-string
 * @dest : destination
 * @src : source
 * @n : number of string n
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i)  = *(src + i);
		i++;
	}
	if (i < n)
		dest[i++] = '\0';

	return (dest);
}
