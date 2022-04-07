#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n number of s2 to s1
 *
 * @s1: first_string
 * @s2: second_string
 * @n: number of byte of s2 to concatenate
 *
 * Return: concat s1&s2 (s1s2)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	unsigned int sz1, sz2;
	unsigned int count1, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (sz1 = 0; s1[sz1] != '\0'; sz1++)
		;
	for (sz2 = 0; s2[sz2] != '\0'; sz2++)
		;
	if (n < sz2)
		sz2 = n;

	s1s2 = malloc(sizeof(char) * (sz1 + sz2 + 1));
	if (s1s2 == NULL)
		return (NULL);

	for (count1 = 0; count1 < sz1; count1++)
		s1s2[count1] = s1[count1];
	for (count2 = 0; count2 < sz2; count2++, count1++)
		s1s2[count1] = s2[count2];
	s1s2[count1] = '\0';

	return (s1s2);
}
