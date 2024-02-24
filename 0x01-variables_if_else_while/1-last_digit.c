#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *discraption:
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%i and is greater than 5\n", n);
	else if (n == 0)
		printf("%i and is 0\n", n);
	else if (n < 6 && != 0)
		printf("%i and is 0\n", n);
	return (0);
}
