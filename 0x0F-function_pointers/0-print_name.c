#include <stddef.h>
#ifndef FUN_POINTER 
#include "function_pointers.h" 
#endif
/**
 * print_name - print a name using pointer function
 * @name: the name to print
 * @f: the function to call to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
