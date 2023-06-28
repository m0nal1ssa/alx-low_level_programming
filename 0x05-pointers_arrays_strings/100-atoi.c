#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts a string to integer
 * @str: string pointer
 * Return: the int value
 */
int _atoi(char *str)
{
	unsigned int int_val = 0;
	int i = 0;
	int neg = 1;

	while (str[i] != '\n')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		} else if (str[i] >= '0' && str[i] <= '9')
		{
			int_val = int_val * 10 + (str[i] - '0');
		}

		if (int_val > 0 && !(str[i] >= '0' && str[i] <= '9'))
			break;

		i++;
	}

	return (int_val * neg);
}
