#include <stdio.h>		
#include "main.h"
/**
 * main - print the number of all arguments 
 * @argc: count of arguments
		
 * @argv: vector of arguments		
 *
 * Return: Always 0 (Success)		
 */
int main(int argc, char *argv[])		
{		
(void) argv;
	printf("%d\n", argc - 1);
	return (0);	
}
