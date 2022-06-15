#include <stdio.h>

/**
 * main - prints Fizz and Buzz for numbers from 1 to 100
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n++);
	for (; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", n);
	}
	printf("\n");

	return (0);
}
