#include "search_algos.h"


/**
 * linear_search - preform liner search
 * @array: given array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: index of the value else -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i, index = -1;

	for (i = 0 ; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			printf("Found %d at index: %ld\n", value, i);
			index = i;
			break;
		}
	}

	return (index);
}
