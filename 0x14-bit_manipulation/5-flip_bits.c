#include "main.h"

/**
 * clear_bit - set a bit to 0 by index
 * @n: decimal number
 * @index: given index
 * Return: set state
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int diff = n ^ m;
	unsigned int flips = 0;

	while (diff)
	{
		flips += diff & 1;
		diff >>= 1;
	}

	return (flips);
}
