#include "main.h"

/**
 * _memset - fill 1st  n bytes of mem pointed to by s with const byte b
 * @s: pointer to memory 2 be filled
 * @b: const byte 2 be used 2 fill
 * @n: number of bytes 2 fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
