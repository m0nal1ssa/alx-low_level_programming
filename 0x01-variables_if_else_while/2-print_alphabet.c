#include <stdio.h>
/**
 *main - this script print a-z in
 *lower case letter
*Return:0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
