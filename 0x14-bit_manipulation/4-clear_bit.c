#include "main.h"

/**
 * clear_bit - set a bit to 0 by index
 * @n: decimal number
 * @index: given index
 * Return: set state
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int base2 = 1;

	if (index > 64)
		return (-1);

	for (; index > 0; index--)
		base2 *= 2;

	if (base2 <= *n && (*n >> index) & 1)
		*n -= base2;

	return (1);
}
