#include "main.h"

/**
 * print_square - print a square in form of (size*size)
 * @size: the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int hei, wid;

	for (hei = 1; hei <= size; hei++)
	{
		for (wid = 1; wid <= size; wid++)
		{
			_putchar(35);
		}

		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
