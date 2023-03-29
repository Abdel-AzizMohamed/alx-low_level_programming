#include "main.h"

/**
 * print_triangle - print out a triangle with a given size
 * @size: the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int hei, wid, sp;

	for (hei = 1; hei <= size; hei++)
	{
		for (sp = size; sp >= hei; sp--)
		{
			_putchar(32);
		}

		for (wid = 1; wid <= hei; wid++)
		{
			_putchar(35);
		}
		_putchar(10);
	}

	if (size <= 0)
		_putchar(10);
}
