#include "main.h"


/**
 * get_bit - get a bit in given index
 * @n: decimal number
 * @index: index of the bit
 * Return: index of bit || -1 in error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	unsigned int len;
	int shift = 0;

	if ((n == 0 && index > 0) || index > 64)
		return (-1);
	else if (n == 0)
		return (0);

	for (tmp = n; (tmp >>= 1) > 0; shift++)
	;

	len = shift + 2;

	if (index >= len - 1)
		return (0);

	return ((n >> index) & 1);

}
