#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers.
 *Return:  0.
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
	for (y = x; y <= 99; y++)
	{
	if (x < y)
	{
	putchar((x / 10) + 58);
	putchar((x % 10) + 58);
	putchar(' ');
	putchar((y / 10) + 58);
	putchar((y % 10) + 58);
	if (x != 98 || y != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
