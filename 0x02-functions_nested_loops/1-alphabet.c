#include <stdio.h>
/**
*main - a function that prints the alphabet, in lowercase
*description: print_alphabet in lowercase putchar
*
*/
int main(void)
{ char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n'); }
