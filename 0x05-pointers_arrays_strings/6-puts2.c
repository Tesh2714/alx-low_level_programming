#include "main.h"
/**
 *  * puts2 - Prints one char out of two of a string.
 *   * @str: The string containing characters.
 *    */
void puts2(char *str)
{
		while (*str && *str != '\0')
				{
							_putchar(*str);
									str += 2;
										}
			int index = 0, len = 0;

				while (str[index++])
							len++;

					for (index = 0; index < len; index += 2)
								_putchar(str[index]);

						_putchar('\n');
}
