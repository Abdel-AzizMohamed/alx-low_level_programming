#include "main.h"


/**
 * base2 - get the 2 power of number
 * @count: number
 * Return: 2 power of count
*/
unsigned int base2(unsigned int count)
{
	unsigned int i, base = 1;

	for (i = 1; i < count; i++)
		base *= 2;

	return (base);
}


