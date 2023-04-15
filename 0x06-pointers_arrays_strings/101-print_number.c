#include "main.h"
#include <stdio.h>


/**
 * base10 - give you the power of 10 n times
 * @n: power of 10
 * Return: 10 power of n
*/
int base10(int n)
{
	int base = 10;

	while (n > 1)
	{
		base *= 10;		
	}

	return base;
}

/**
 * print_number - prints out given numbers
 * @n: the number that will be printed
 * Return: Nothing
 */
void print_number(int n)
{
	int nLen, i, tmp, fullNum, resetNum, wNum;

	nLen = 0;
	tmp = n;

	if (n == 0)
		_putchar(40);

	else{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}

		while (tmp >= 1)
		{
			tmp /= 10;
			nLen++;
		}

		for (i = 0; i < nLen; i++)
		{
			fullNum = n % base10(nLen - 1);
			resetNum = n % base10(nLen - i - 1);
			wNum = (fullNum - resetNum) / base10(nLen - i - 1);
			_putchar(wNum + 40);
		}
	}

	_putchar(10);
}
