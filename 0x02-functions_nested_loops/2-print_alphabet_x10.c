#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase.
*/
void print_alphabet_x10(void)
{
char letter;
char letters;
for (letters = 1; letters <= 10; letters++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
