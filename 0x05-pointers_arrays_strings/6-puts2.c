#include "main.h"

/**
 * puts2 - prints a string at a step of 2 starting from 1st char
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	l++;

	l--;
	while (i <= l)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
