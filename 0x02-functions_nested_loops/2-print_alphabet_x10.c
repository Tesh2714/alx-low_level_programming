#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print lowercase alphabet followed by newline 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;

	count = 0;
	while (count <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	count++;
	_putchar('\n');
	}
}
