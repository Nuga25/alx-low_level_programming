#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states if the last digit is less or more
 * Return: 0
 */

int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5", n, b);
	else if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, b);
	else
		printf("Last digit of %d is %d and is 0", n, b);

	printf("\n");
	return (0);
}
