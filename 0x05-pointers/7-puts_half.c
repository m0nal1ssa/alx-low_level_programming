#include "main.h"

/**
 * puts_half - prints second halve of a string
 * @str: string pointer
 */
void puts_half(char *str)
{
	int len = 0;
	int _opr;

	while (str[len] != '\0')
		len++;

	_opr = len / 2;

	if (len % 2 != 0)
		_opr++;

	for (_opr = _opr; _opr < len; _opr++)
		_putchar(str[_opr]);

	_putchar('\n');
}
