#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - print out a list of arguments
 * with separator after each argemunt
 * @separator: separator after each print
 * @n: number of arguments
 * Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *tmp;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(list, char*);

		if (tmp == NULL)
			tmp = "(nil)";

		printf("%s", tmp);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
