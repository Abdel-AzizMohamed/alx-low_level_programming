#include "variadic_functions.h"

/**
 * sum_them_all - get the sum of all given arguments
 * @n: number of arguments
 * Return: the sum of arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);
	return (result);
}
