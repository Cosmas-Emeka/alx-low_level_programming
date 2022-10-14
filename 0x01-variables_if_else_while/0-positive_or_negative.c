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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 2)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n");

	return (0);
}
