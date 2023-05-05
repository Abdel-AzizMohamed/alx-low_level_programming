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
	int shift = 0, *bits_list, i = 0;

	if (n == 0 && index > 0)
		return (-1);
	else if (n == 0)
		return (0);

	for (tmp = n; (tmp >>= 1) > 0; shift++)
	;

	len = shift + 2;
	bits_list = malloc(sizeof(int) * len);

	if (index >= len)
		return (-1);

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			bits_list[i] = 1;
		else
			bits_list[i] = 0;
		i++;
	}
	return (bits_list[(len - 2) - index]);
}
