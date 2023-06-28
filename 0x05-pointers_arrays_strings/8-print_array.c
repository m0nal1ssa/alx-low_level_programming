#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints first n elements of an array of
 * integers sep by commas, ended by a new line
 * @a: array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int index;

	if (n > 0)
	{
		for (index = 0; index < n - 1; index++)
		{
			printf("%d, ", *(a + index));
		}
		printf("%d\n", *(a + n - 1));
	} else
	{
		_putchar('\n');
	}

}
