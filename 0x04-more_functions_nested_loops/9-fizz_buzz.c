#include <stdio.h>

/**
 * main - startung point
 * Description: Prints 1 to 100 and replaces multiples of 3 with Fizz
 * and multiples of 5 with Buzz
 * Return: Always 0
 */
int main(void)
{
	int cntr;

	for (cntr = 1; cntr <= 100; cntr++)
	{
		if ((cntr % 3 == 0) && (cntr % 5 == 0))
		{
			printf("FizzBuzz");
		} else if (cntr % 3 == 0)
		{
			printf("Fizz");
		} else if (cntr % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", cntr);
		}

		if (cntr < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
