#include <stdlib.h>
#include "function_pointers.h"


/**
 * int_index - serach for an integer in array
 * and return its index
 * @array: the given array for serach
 * @size: size of the array
 * @cmp: search pointer function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	else if (size <= 0)
		return -1;

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
