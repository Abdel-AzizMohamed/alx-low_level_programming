#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints out given name
 * @name: string
 * @f: pointer function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
