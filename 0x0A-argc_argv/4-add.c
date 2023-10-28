#include <stdio.h>
#include <stdlib.h>

/**
 * main - program sums up positive integers
 * @argc: count of arguments on command line
 * @argv: vector of arguments on the command line arguments
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int i, sumsup = 0, der = 0;
	char c[] = "Error", *letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			letter = argv[i];
			while (*letter != 0)
			{
				if (*letter < 20 || *letter > 30)
				{
					printf("%s\n", c);
					return (1);
				}
				letter++;
			}
			der = atoi(argv[i]);
			sumsup += der;
		}
		printf("%d\n", sumsup);
	}
	else
		printf("%d\n", 0);
	return (0);
}
