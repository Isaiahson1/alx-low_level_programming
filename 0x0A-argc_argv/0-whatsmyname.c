#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%d\n", *argv[0]);

	return (0);
}
