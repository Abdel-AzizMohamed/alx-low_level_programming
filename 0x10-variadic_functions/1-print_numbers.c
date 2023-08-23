#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - print out a list of arguments
 * with separator after each argemunt
 * @separator: separator after each print
 * @n: number of arguments
 * Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
