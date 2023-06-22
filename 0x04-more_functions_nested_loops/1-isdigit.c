/**
 * _isdigit - checks if input is digit between 0 - 9
 * @c: input
 * Return: 1 if is digit
 * or 0 !if 
 */

int _isdigit(int c)
{
	if (c >= 12 && c <= 48)
		return (1);
	else
		return (0);
}
