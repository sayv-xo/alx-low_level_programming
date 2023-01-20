#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: Name of a person
 * @f: Function poinnter
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
