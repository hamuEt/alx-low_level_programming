#include <stdio.h>

/**
* main - prints the alphabet in lowercase using putchar
* Return: 0 on success
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);

putchar('\n');

return (0);
}
