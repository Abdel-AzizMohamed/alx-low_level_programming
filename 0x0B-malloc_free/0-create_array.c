#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the first char in the array
 * Return: NULL if size = 0 or if failed
 * else pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
