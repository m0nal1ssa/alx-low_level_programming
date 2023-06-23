#include <stdio.h>
#include <math.h>

/**
 * main - Starting point of program
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long lpf, low_f = 2;

	while (n != 0)
	{
		if (n % low_f != 0)
		{
			low_f++;
		} else
		{
			lpf = n;
			n = n / low_f;

			if (n == 1)
				break;
		}
	}

	printf("%lu\n", lpf);

	return (0);
}

