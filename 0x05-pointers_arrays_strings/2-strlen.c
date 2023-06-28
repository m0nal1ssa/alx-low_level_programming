#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string pointer
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
