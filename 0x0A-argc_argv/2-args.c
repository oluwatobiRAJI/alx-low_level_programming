#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: number og arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc;  i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
