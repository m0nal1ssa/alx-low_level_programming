#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds args passed to it
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: 0 for success; 1 for error if an arg is not a digit
 */
int main(int argc, char *argv[])
{
	int a, b, length;
	int sum = 0;
	char *ptr;

	for (a = 1; a < argc; a++)
	{
		ptr = argv[a];
		length = strlen(ptr);

		for (b = 0; b < length; b++)
		{
			if (isdigit(*(ptr + b)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);
	return (0);
}
