#include <stdio.h>
#include <stdlib.h>

/**
 * main - program does multiplication
 * @argc: count of arguments in command line
 * @argv: vector of arguments
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int timex = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	timex = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", timex);
	return (0);
}
