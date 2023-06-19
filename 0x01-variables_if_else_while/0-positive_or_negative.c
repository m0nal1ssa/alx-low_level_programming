#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes there*/
/*betty style doc for function main goes there*/
/**
*main - this script check random number if it is
*positive
*zero
<<<<<<< HEAD
*negative
	*Return:0
*/
	int main(void) /*main script goes here*/
=======
*negative 
*Return:  0.
*/
int main(void) /*main script goes here */
>>>>>>> 561be726ad3735349b0ed71b3452c397e1b83585
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);  /*print positive*/
	else if (n == 0)
		printf("%d is zero\n", n);   /*zero zone*/
<<<<<<< HEAD
	else
		printf("%d is negative\n", n);  /*negative side*/
=======

	else
		printf("%d is negative\n", n);  /*negative side*/

>>>>>>> 561be726ad3735349b0ed71b3452c397e1b83585
	return (0);
}
