#include "main.h"
#include <stdio.h>
/**
*main - a function that prints the alphabet, in lowercase
*Description: alphabet in lowercase
*
*
*Return 0 always
*/
int print_alphabet(void)
{ char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0); }
