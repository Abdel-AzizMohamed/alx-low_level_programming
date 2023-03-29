#include "main.h"
#include <math.h>

/**
 * print_number - print integer using ascii table
 * @n: the number that will be printed
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	{

	else
		num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

