#include <unistd.h>

/**
 * main - starting point
 * Description: writing out a quote with write function
 * Return: return (1) to exit code to show an error
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quote, 59);
	return (1);
}
