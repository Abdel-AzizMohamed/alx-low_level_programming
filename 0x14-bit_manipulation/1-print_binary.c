#include "main.h"


/**
 * base2 - get the 2 power of number
 * @count: number
 * Return: 2 power of count
*/
unsigned long int base2_long(unsigned long int count)
{
	unsigned long int i, base = 1;

	for (i = 1; i < count; i++)
		base *= 2;

	return (base);
}


/**
 * print_binary - prints out converted
 * decimal to binary
 * @n: decimal number
 * Return: Nothing.
*/
void print_binary(unsigned long int n)
{
	unsigned long int tmp = 1;
	int len = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (1)
	{
		if (tmp * 2 <= n)
		{
			tmp *= 2;
			len++;
		}
		else
			break;
	}

	for (; len > 0; len--)
	{
		if (base2_long(len) <= n)
		{
			n -= base2_long(len);
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
