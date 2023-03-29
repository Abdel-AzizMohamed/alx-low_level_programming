#include "main.h"
#include <math.h>

/**
 * print_number - print integer using ascii table
 * @n: the number that will be printed
 * Return: Always 0.
 */

void print_number(int n)
{
	int numLength = floor(log10(n)) + 1;
	int i;

	for (i = 1; i <= numLength; i++)
	{
		int power = pow(10, i);
		int num = n % power;

		_putchar(48 + num);
	}

	_putchar(10);
}
