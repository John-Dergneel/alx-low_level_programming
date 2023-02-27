#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: an input string
 * @src: an input string
 * Return:  pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *bob = dest;

while (*src)
*dest++ = *src++;

return (bob);
}
