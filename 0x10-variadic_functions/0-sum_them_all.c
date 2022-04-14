#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * Return: always zero or sum of arg
 */
int sum_them_all(const unsigned int n, ...)
{
	int sumarg = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);
	if (n != 0)
	{
		va_start(ap, n);
		for (i = 1; i <= n; i++)
			sumarg += va_arg(ap, int);
		va_end(ap);
		return (sumarg);
	}
	return (0);
}
