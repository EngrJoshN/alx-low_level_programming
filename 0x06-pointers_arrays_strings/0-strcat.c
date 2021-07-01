#include "holberton.h"
/**
 * _strcat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;

for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
