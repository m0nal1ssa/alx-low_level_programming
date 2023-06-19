#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - this script check random number if it is
*positive
*zero
*negative 
*Return:  0.
*/
int main(void) /*main script goes here */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);  /*print positive */

	else if (n == 0)
		printf("%d is zero\n", n);   /*zero zone*/

	else
		printf("%d is negative\n", n);  /*negative side*/

	return (0);
}
