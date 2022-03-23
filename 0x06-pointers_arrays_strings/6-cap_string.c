#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	        char *ptr;

		    ptr = cap_string(str);
		        printf("%s", ptr);
			    printf("%s", str);
			        return (0);
}
char *cap_string(char *s)
{
	int i;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + 0) >= 'a' && *(s + 0) <= 'z')
		{
			*(s + 0) = *(s + 0) - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '\"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) = *(s + i + 1) - 32;
		}
		i++;
	}
	return (s);
}
