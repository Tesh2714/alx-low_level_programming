#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char s1[98] = "Hello ";
	        char s2[] = "World!\n";
		    char *ptr;

		        printf("%s\n", s1);
			    printf("%s", s2);
			        ptr = _strncat(s1, s2, 1);
				    printf("%s\n", s1);
				        printf("%s", s2);
					    printf("%s\n", ptr);
					        ptr = _strncat(s1, s2, 1024);
						    printf("%s", s1);
						        printf("%s", s2);
							    printf("%s", ptr);
							        return (0);
}
int _strlen(char *c)
{

	int i = 0;
	while (*(c + i) != '\0')
	{
			i++;
	}
	return (i);
}

/**
 * * _strncat - return the concatenates two strings
 * *
 * *@dest: destinations string
 * *@src: source string
 * *@n: number of bytes to append
 * * Return: destinations string
 * */


char *_strncat(char *dest, char *src, int n)
{

	int i, len;
	len = _strlen(dest);

	i = 0;
	while (*(src + i) != *(src + n))
	{
			*(dest + len) = *(src + i);
				i++;
					len++;
	}
	*(dest + len) = '\0';
	return (dest);

}
