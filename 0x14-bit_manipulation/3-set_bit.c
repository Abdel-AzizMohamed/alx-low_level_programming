#include "main.h"


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;
	int shift = 0;
	int *bits_list;

	if (index > 64)
		return (-1);

	if (*n == 0)
	{
		tmp = 1;
		for (; index > 0; index--)
			tmp *= 2;
		*n = tmp;
		return (1);
	}
	bits_list = malloc(sizeof(int) * (int)index);

	if (!bits_list)
	{
		free(bits_list);
		return (-1);
	}

	for (tmp = *n; shift < (int)index; shift++)
	{
		bits_list[shift] = tmp & 1;
		tmp >>= 1;
	}

	tmp |= 1;	

	for (; shift > 0; shift--)
	{
		tmp <<= 1;
		if (bits_list[shift] & 1)
			tmp |= 1;
	}

	*n = tmp;
	free(bits_list);
	return (1);
}
