#include "main.h"
/**
 * print_rev – reverse string
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int  = 0;
	int o;

	while (*s != '\0')
	{
		revs++;
		s++;
	}
	s--;
	for (o = revs; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
