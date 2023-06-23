#include "main.h"

/**
 * print_square - prints a square
 * @size: side of square
 */
void print_square(int size)
{
	int cntr, size_s = size;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (size > 0)
		{
			for (cntr = 0; cntr < size_s; cntr++)
			{
				_putchar('#');
			}
			_putchar('\n');
			size--;
		}
	}
}
