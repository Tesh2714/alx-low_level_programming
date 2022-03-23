#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code for
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	        char *p;

		    p = leet(s);
		        printf("%s", p);
			    printf("%s", s);
			        return (0);
}
/**
 *  * leet - function that encodes a string into 1337.
 *   * @s: Pointer to Char
 *    * Return: char.
 *     */

char *leet(char *s)
{
		int i = 0;
			int j = 0;
				char *l = "aAeEoOlLtT";
					char *n = "4433001177";

						while (*(s + i) != '\0')
								{
											while (*(l + j) != '\0')
														{
																		if (*(s + i) == *(l + j))
																							*(s + i)  = *(n + j);
																					j++;
																							}
													j = 0;
															i++;
																}
							return (s);
}



