#include "main.h"

/**
 * get_endianness - get the endianness
 * Return: endianness type.
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *)&n;

	if (*ch)
		return (1);
	else
		return (0);
}
