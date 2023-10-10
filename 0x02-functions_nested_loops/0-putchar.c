#include "main.h"

/**
*main - this will print inputed text as an output
*
*Return:this will return 0
*/
int main(void)
{
	char put[20] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar(20);
	return (0);
}
