#include "main.h"

/**
 * flip_bits - give needed bits to flip
 * to turn a number to another
 * @n:first number
 * @m: second number
 * Return: number of flips
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
