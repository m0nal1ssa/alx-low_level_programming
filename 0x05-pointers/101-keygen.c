#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * main - Generates random password valid password for 102-crack me
 * Return: Always 0
 */
int main(void)
{
	int i = 0, cra;

	srand(time(NULL));

	while (i <= 2646)
	{
		cra = (rand() % 127) + 1;
		write(1, &cra, 1);
		i += cra;
	}

	cra = 2772 - i;
	write(1, &cra, 1);

	return (0);
}
