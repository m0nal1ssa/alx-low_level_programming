#include <stdio.h>

/**
 * main - program start here
 *combinations of single-digit numbers
 *separated by "," and space
 *and in an ascending order.
 *Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
