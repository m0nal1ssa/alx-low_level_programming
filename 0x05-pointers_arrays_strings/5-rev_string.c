#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string pointer
 */
void rev_string(char *str)
{
	int len = 0;
	int n_opr, i;
	char temp;

	while (str[len] != '\0')
	{
		len++;
	}

	n_opr = len / 2;

	len--; /* indexing len */
	for (i = 0; i < n_opr; i++)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
	}
}
