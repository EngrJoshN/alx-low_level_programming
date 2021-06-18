#include <stdio.h>

/**
* main - print 00 t0 99 with no duplicate digits or combos: no 11, no 10(01)
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 48, j = 49;
while (i < 58)
{
while (j < 58)
{
putchar(i);
putchar(j);

if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
j = i + 1;
}
putchar('\n');

return (0);
}
