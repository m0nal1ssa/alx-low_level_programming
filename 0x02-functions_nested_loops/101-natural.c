#include "main.h"
#include <stdio.h>


/**
  * main - Entry point
  * Description: computes and prints the sum of multiples of num
  * Return: 0
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
	}
	printf("%d\n", sum);

	return (0);
}
