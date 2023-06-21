#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @ch: is the character to check
  * Return: 0
*/


int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
