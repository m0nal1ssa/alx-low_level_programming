#include "main.h"
#include <stdlib.h>


/**
 * _strdup - This copies a string to a new address
 * @str:pointer to the string
 * Return: pointer to new address copied to; NULL if failed or *str is NULL
 */
char *_strdup(char *str)
{
	int s = 0;
	int m;
	char *new_adrr;

	if (str == NULL)
		return (NULL);

	while (str[s] != '\0')
		s++;
	s++;
	new_adrr = (char *) malloc(sizeof(char) * s);
	if (new_adrr == NULL)
		return (NULL);

	for (m = 0; m < s; m++)
		new_adrr[m] = str[m];

	return (new_adrr);
}
