#include "main.h"
/**
 * *_strcat -  concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
char *bob = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

dest = '\0';

return (bob);
}
