#include <stdio.h>
#include <stdlib.h>

/**
 * is_not_digit - check if a string contains a non digit
 * @s: given string
 * Return: 1 if s contains a non digit otherwise return 0
 */
int is_not_digit(char *s)
{
	int i;

	if (*s == '-')
		s++;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (1);
	return (0);
}

/**
 * main - entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if all the arguments are digits otherwise
 * return 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc > 0)
	{
		if (is_not_digit(argv[argc]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
