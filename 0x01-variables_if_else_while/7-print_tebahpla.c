#include <stdio.h>

/**
* main - print reversed alphabet in lower case z-a
* Return: Always 0 (Success)
*/

int main(void)
{
char alpha = 'z';

while (alpha >= 'a')

{
putchar(alpha);
alpha--;
}
putchar('\n');

return (0);
}
