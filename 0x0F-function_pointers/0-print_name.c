#include "function_pointers.h"


/**
 * print_name - prints out given name
 * @name: string
 * @f: pointer function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
