#include "main.h"

/**
 * strLen - get the string length
 * @str: string
 * Return: string length
*/
int strLen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * base2 - get the 2 power of number
 * @count: number
 * Return: 2 power of count
*/
int base2(int count)
{
	int i, base = 1;

	for (i = 1; i < count; i++)
		base *= 2;

	return (base);
}

/**
 * binary_to_uint - convert binary to decimal
 * @b: string of binary
 * Return: converted binary
*/
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, result = 0;

	if (!b)
		return (0);

	for (i = strLen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		else if (b[i] == '1')
			result += base2(j + 1);
		j++;
	}

	return (result);
}
