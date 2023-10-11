#include "main.h"
/**
*print_alphabet_10 - Performs function of printing alphabet ten times over
*desc: This is achieved using a loop
*Return: no return
*/
void print_alphabet_10(void)
{
int counter = 0;
int times;
while (counter++ <= 9)
{
for (times = 'a'; times <= 'z'; times++)
_putchar(times);

_putchar(10);
}
}
