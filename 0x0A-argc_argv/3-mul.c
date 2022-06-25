#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if argument is more than 3 otherwise
 * return 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
