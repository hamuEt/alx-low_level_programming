#include "main.h"
#include <stdio.h>

/**
* positive_or_negative - prints whether a given integer is positive or negative
* @i: the integer to test
*/

void positive_or_negative(int i)
{
if (i == 0)
printf("%d is zero\n", i);
else if (i > 0)
printf("%d is positive\n", i);
else
printf("%d is negative\n", i);
}

/**
* main - tests the positive_or_negative function
* Return: Always 0
*/

int main(void)
{
int i;

i = 98;
positive_or_negative(i);

return (0);
}
