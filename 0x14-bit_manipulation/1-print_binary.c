#include "main.h"


/**
 * print_binary - prints out converted
 * decimal to binary
 * @n: decimal number
 * Return: Nothing.
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shift = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (tmp = n; (tmp >>= 1) > 0; shift++);

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
