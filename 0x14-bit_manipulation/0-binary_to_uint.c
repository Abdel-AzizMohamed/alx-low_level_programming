#include "main.h"


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
