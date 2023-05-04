#include "main.h"

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
		if (base2(len) <= n)
		{
			n -= base2(len);
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
