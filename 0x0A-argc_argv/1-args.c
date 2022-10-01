#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count for the program
 * @argv: vector of argument from pointer to string
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argv - 1);
	return (0);
}
