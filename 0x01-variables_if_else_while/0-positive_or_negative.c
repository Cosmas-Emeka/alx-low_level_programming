#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry point
 *
 * Description: displaying negative or postive value of n
 *
 * Return: Always 0 (Success)
 */

        int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 2)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n");

	return (0);
}
