#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap between 2 vars
 * @a: first var
 * @b: second var
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
