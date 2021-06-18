#include <stdio.h>

/**
* main - print 001 t0 999 with no duplicate digits or combos
* Return: Always 0 (Success)
*/

int main(void)
{
  int i = 48, j = 49; k = 50;
while (i < 58)
{
while (j < 58)
{
while (k < 58)
{
putchar(i);
putchar(j);
putchar(k);

if (i != 55 || j != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
k = j + 1;
}
i++;
j = i;
}
putchar('\n');

return (0);
}
