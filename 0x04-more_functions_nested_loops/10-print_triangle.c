#include "main.h"

/**
 * print_triangle using #
 * @n: triangle
 * Return: void
 */

void print_triangle(int size);
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		int h = i + 1;
		int s = size - h;

		for (j = 0; j <= s; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= h; k++)
		{
			_putchar('#');
		}
		return (0);
	}
}


