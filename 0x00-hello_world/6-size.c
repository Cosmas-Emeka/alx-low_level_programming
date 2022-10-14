#include <stdio.h>

/**
 * main - Function computes sizes of various data types
 *
 * Description: Using sizeof to display size of char, int, long int, long long int, and float 
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	float f;
	
	printf("Size of a char: %lu byte\(s\)\n", sizeof(c));
	printf("Size of an int: %lu byte\(s\)\n", sizeof(i));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(long long int));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(f));

	return (0);

}
