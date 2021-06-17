#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int intType;
float floatType;
char charType;
long int longType;
long long int doubleType;
fprintf(stderr, "Size of a char: %zu byte(s)\n", sizeof(charType));
fprintf(stderr, "Size of an int: %zu byte(s)\n", sizeof(intType));
fprintf(stderr, "Size of a long int: %zu byte(s)\n", sizeof(longType));
fprintf(stderr, "Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
fprintf(stderr, "Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
