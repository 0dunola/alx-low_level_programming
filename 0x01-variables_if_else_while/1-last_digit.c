#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n, unit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	unit = n % 10;
	if (unit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, unit);
	else if (unit == 0)
		printf("Last digit of %d is %d and is 0\n", n, unit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, unit);
	return (0);
}
