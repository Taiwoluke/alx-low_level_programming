#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it receives
* @argc: displays how many arguments it receives
* @argv: shows all arguments on the command line
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
