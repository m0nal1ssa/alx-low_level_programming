#include <stdio.h>
/**
 * main - Entry point of the program
 *
 *Instruction for program:
 *Prints the alphabet in lowercase and
 *then in uppercase
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet first */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Then print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
