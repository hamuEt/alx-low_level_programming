#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entery point
*Return: Always 0 (success)
*/

int main(void)
{
int d;

for (d = 0; d <= 9; d++)
{
putchar(d + '0');
if (d != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
