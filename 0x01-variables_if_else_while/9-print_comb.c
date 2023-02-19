#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description: prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
int digit1;

for (digit1 = 0; digit1 <= '9'; digit1++)
{
putchar(digit1);
if (digit1 != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
