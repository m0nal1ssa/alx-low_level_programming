#include "main.h"

/**
 * swap_int - Swaps the values of two ints
 * @a: pointer for firast value
 * @b: pointer for second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
