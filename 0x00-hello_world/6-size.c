#include <stdio.h>
/**
 * main - starting point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l_i;
	long long int l_li;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l_i));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(l_li));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
