#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @str : string pointer
 */
void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	len--; /* indexing len, not actual len */
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
