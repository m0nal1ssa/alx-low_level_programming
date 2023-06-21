#include "main.h"
/**
 * main- prints _putchar, followed by new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char abc[] = "_putchar";

	int e;

	for (e = 0; e < 8; e++)
	{
		_putchar(abc[e]);
	}
	_putchar('\n');

	return (0);
}
