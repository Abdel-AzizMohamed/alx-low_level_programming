#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the order of array on integers
 * @a: the array 
 * @n: number of elements in the array
 * Return: Nothing 
 */
void reverse_array(int *a, int n)
{
	int i, lastTmp;

	for (i = 0; i < n/2; i++)
	{
		lastTmp = a[(i+1)-n];
		a[(i+1)-n] = a[i];
		a[i] = lastTmp;
	}
}

