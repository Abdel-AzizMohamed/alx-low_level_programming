#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
   	swap_int(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
    return (0);
}
