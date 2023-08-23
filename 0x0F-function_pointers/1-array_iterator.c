#include <stdlib.h>
#include "function_pointers.h"


/**
 * array_iterator - preform function of eact element of the array
 * @array: the given array
 * @size: the size of the array
 * @action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
