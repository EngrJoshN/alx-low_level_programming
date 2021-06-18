#inclde <stdio.h>

/**
*print alphabet in lower case and un uppercase 'a-z' using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
char lower = 'a';
char upper = 'A';
 
while (lower <= 'z')/* print lowercase a-z*/
 
{
putchar(lower);
lower++;
}

while (Upper <= 'Z')/* print uppercase A-Z*/
 
{
putchar(upper);
Upper++;
}

putchar('\n');

return (0);
}
