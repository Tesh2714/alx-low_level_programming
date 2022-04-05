#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @str: input char
 * Return: length of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * str_concat - Concat 2 strings.
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	conc = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);
	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}
